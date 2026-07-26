# Quanta Dot

## From Screen Time to Build Time: A Smart Device Operated Learning Robot

A low-cost Arduino-based educational robot designed to transform passive smartphone usage into active STEM learning through robotics, embedded systems, Bluetooth communication, and obstacle avoidance.

---

# Overview

Quanta Dot is an educational robotics platform developed to encourage hands-on learning in robotics, embedded systems, and engineering. The system enables users to control a robot through a mobile device while exploring practical concepts such as wireless communication, obstacle avoidance, motor control, and sensor integration.

The project is designed with affordability, portability, and accessibility in mind, making it suitable for schools, workshops, and beginner robotics education.

---

# Objectives

## General Objective

Develop a low-cost smart educational robot that transforms passive mobile usage into active robotics and STEM learning.

## Specific Objectives

- Design and develop a Bluetooth-controlled educational robot.
- Implement obstacle detection and avoidance.
- Integrate sound-based interaction.
- Encourage practical STEM education.
- Provide an affordable robotics learning platform.
- Increase student interest in robotics and embedded systems.
- Evaluate educational effectiveness through demonstrations and surveys.
- Build a scalable platform suitable for classroom environments.

---

# Features

- Bluetooth-based smartphone control
- Automatic obstacle detection
- Autonomous obstacle avoidance
- Sound and voice interaction
- Arduino-based embedded system
- Portable battery-powered operation
- Low-cost implementation
- Beginner-friendly design
- Educational STEM platform

---

# Hardware Components

| Component | Description |
|------------|-------------|
| Arduino Uno | Main microcontroller |
| HC-05 Bluetooth Module | Wireless communication |
| HC-SR04 Ultrasonic Sensor | Obstacle detection |
| L298N Motor Driver | Motor control |
| SG90 Servo Motor | Sensor rotation |
| DC Gear Motors | Robot movement |
| Acrylic Chassis | Robot structure |
| Speaker | Audio output |
| Microphone Module | Sound detection |
| Buzzer | Alert system |
| Li-ion Batteries | Power supply |

---

# Software Requirements

- Arduino IDE
- Embedded C/C++
- Bluetooth Controller Application
- AutoCAD (for chassis design)

---

# Project Structure

```
Quanta-Dot/
│
├── Arduino_Code/
│   └── robot.ino
│
├── Documentation/
│   └── Final_Report.pdf
│
├── Circuit_Diagram/
│   └── circuit_diagram.png
│
├── Hardware/
│   ├── chassis_design.dwg
│   ├── wiring.png
│   └── components_list.pdf
│
├── Images/
│   ├── robot.jpg
│   ├── hardware.jpg
│   ├── testing.jpg
│   └── showcase.jpg
│
├── Videos/
│   └── demo.mp4
│
├── LICENSE
└── README.md
```

---

# System Architecture

```
Smartphone
     │
Bluetooth Communication
     │
HC-05 Module
     │
Arduino Uno
     │
 ┌───────────────┬───────────────┐
 │               │               │
Motor Driver   Ultrasonic     Buzzer
 │             Sensor            │
 │               │               │
DC Motors     Servo Motor     Alerts
 │
Robot Movement
```

---

# Workflow

1. Connect the smartphone to the robot using Bluetooth.
2. Send movement commands through the mobile application.
3. Arduino processes the received commands.
4. The motor driver controls the DC motors.
5. The ultrasonic sensor continuously detects nearby obstacles.
6. If an obstacle is detected:
   - Stop the robot
   - Rotate the sensor using the servo motor
   - Measure left and right distances
   - Move toward the safest direction
7. Continue monitoring and responding in real time.

---

# Technologies Used

- Arduino Uno
- Embedded C/C++
- Arduino IDE
- HC-05 Bluetooth Module
- HC-SR04 Ultrasonic Sensor
- L298N Motor Driver
- SG90 Servo Motor
- AutoCAD

---

# Testing and Validation

The system has been tested for the following functionalities:

- Forward movement
- Backward movement
- Left and right turning
- Bluetooth communication
- Obstacle detection
- Obstacle avoidance
- Servo rotation
- Battery stability
- Overall system performance

---

# Educational Impact

The project aims to:

- Promote practical STEM education.
- Encourage hands-on robotics learning.
- Improve problem-solving skills.
- Increase technological awareness.
- Support beginner-level robotics education.

---

# Social Impact

- Reduces passive screen time.
- Encourages productive technology usage.
- Makes robotics education more affordable.
- Supports rural and urban educational institutions.
- Promotes engineering and AI awareness.

---

# Estimated Budget

Approximate project cost: **BDT 5,000**

---

# Future Work

Future enhancements may include:

- AI-powered voice assistant
- Computer vision
- Object detection
- Face recognition
- Gesture control
- Mobile application
- IoT connectivity
- Cloud integration
- Solar charging
- OLED emotion display

---

# Achievements

The project received the **Champion Award** at a robotics project showcase for its educational value, practical implementation, and innovative design.

---

# Team Members

| Name | Role |
|------|------|
| Arnica Sarker | Developer |
| Julias Uddin Khan | Developer |
| Shams Shahriar Haque | Developer |

---

# Supervisor

**A S Zaforullah Momtaz**

Assistant Professor

Department of Computer Science and Engineering

University of Asia Pacific

---

# Documentation

The complete project report is available in the `Documentation` directory.

---

# Demonstration

A demonstration video can be found in the `Videos` directory or on YouTube.

```
https://youtube.com/your-demo-link
```

---

# Repository Contents

```
.
├── Arduino_Code
├── Documentation
├── Circuit_Diagram
├── Hardware
├── Images
├── Videos
├── LICENSE
└── README.md
```

---

# License

This project is developed for educational and research purposes. Feel free to use and modify it with proper attribution.

---

# Citation

If you use this project in your research or educational work, please cite the repository appropriately.

---

# Contact

For questions, suggestions, or collaboration, feel free to open an issue or submit a pull request.
