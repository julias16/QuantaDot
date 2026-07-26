#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial BT_Serial(2, 3); // RX, TX

// Motor pins
#define enA 11
#define in1 9
#define in2 8
#define in3 7
#define in4 6
#define enB 5

// Sensor / Servo / Buzzer pins
#define echo A2
#define trigger A3
#define buzzer 4
#define servoPin 12   

Servo myServo;

// Variables
int bt_data = 5;
int Speed = 80;
int mode = 0;

int distance_F;
int distance_L;
int distance_R;

int setDistance = 20;

#define centerPoint 90
#define leftPoint 150
#define rightPoint 30

void setup() {

  Serial.begin(9600);
  BT_Serial.begin(9600);


  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  pinMode(buzzer, OUTPUT);

  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Stop();

  myServo.attach(servoPin);

  // Servo startup test
  Serial.println("Servo startup test");

  myServo.write(centerPoint);
  delay(1000);

  myServo.write(leftPoint);
  delay(1000);

  myServo.write(rightPoint);
  delay(1000);

  myServo.write(centerPoint);
  delay(1000);

  Serial.println("Robot ready");
}

void loop() {

  if (BT_Serial.available() > 0) {

    bt_data = BT_Serial.read();

    Serial.print("BT Data: ");
    Serial.println(bt_data);

    if (bt_data > 20) {
      Speed = bt_data;
    }
  }

  if (bt_data == 8) {
    mode = 0;
    Stop();
  }
  else if (bt_data == 9) {
    mode = 1;
    Speed = 80;
  }
  else if (bt_data == 10) {
    mode = 2;
    Speed = 80;
  }

  analogWrite(enA, Speed);
  analogWrite(enB, Speed);

  // ================= MANUAL MODE =================
  if (mode == 0) {

    digitalWrite(buzzer, LOW);

    if (bt_data == 1) forword();
    else if (bt_data == 2) backword();
    else if (bt_data == 3) turnLeft();
    else if (bt_data == 4) turnRight();
    else if (bt_data == 5) Stop();
  }


  // ================= OBSTACLE AVOID =================
  else if (mode == 2) {

    distance_F = getDistance();

    if (distance_F > setDistance) {

      digitalWrite(buzzer, LOW);
      forword();
    }
    else {

      handleObstacle();
    }
  }

  delay(20);
}

// ================= ULTRASONIC =================
int getDistance() {

  int sum = 0;
  int valid = 0;

  for (int i = 0; i < 5; i++) {

    int d = ultrasonicRead();

    if (d > 0 && d < 400) {
      sum += d;
      valid++;
    }

    delay(10);
  }

  if (valid == 0) return 400;

  return sum / valid;
}

int ultrasonicRead() {

  digitalWrite(trigger, LOW);
  delayMicroseconds(5);

  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigger, LOW);

  long duration = pulseIn(echo, HIGH, 20000);

  if (duration == 0) return 0;

  return duration / 29 / 2;
}

// ================= OBSTACLE HANDLER =================
void handleObstacle() {

  Stop();

  digitalWrite(buzzer, HIGH);
  delay(200);
  digitalWrite(buzzer, LOW);

  backword();
  delay(400);
  Stop();
  delay(300);

  // LEFT SCAN 
  myServo.write(leftPoint);
  delay(500);      
  delay(200);      

  distance_L = getDistance();

  // RIGHT SCAN 
  myServo.write(rightPoint);
  delay(500);
  delay(200);     

  distance_R = getDistance();

  // CENTER
  myServo.write(centerPoint);
  delay(500);

  if (distance_L > distance_R && distance_L > setDistance) {

    turnLeft();
    delay(600);
  }
  else if (distance_R > distance_L && distance_R > setDistance) {

    turnRight();
    delay(600);
  }
  else {

    backword();
    delay(600);
  }

  Stop();
}

// ================= MOTOR CONTROL =================
void forword() {

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void backword() {

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void turnLeft() {

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void turnRight() {

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void Stop() {

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}