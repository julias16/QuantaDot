# Quanta Dot

> **From Screen Time to Build Time: A Smart Device Operated Learning Robot**

A low-cost Arduino-based educational robot that transforms passive smartphone usage into an interactive STEM learning experience. The robot supports **Bluetooth control**, **voice command control**, and **autonomous obstacle avoidance**, enabling students to explore robotics, embedded systems, and intelligent navigation through hands-on learning.

---

## Table of Contents

- [Overview](#overview)
- [Objectives](#objectives)
- [Features](#features)
- [Project Highlights](#project-highlights)
- [System Architecture](#system-architecture)
- [Hardware Components](#hardware-components)
- [Software Stack](#software-stack)
- [Project Structure](#project-structure)
- [How It Works](#how-it-works)
- [Operating Modes](#operating-modes)
- [Testing and Validation](#testing-and-validation)
- [Educational & Social Impact](#educational--social-impact)
- [Budget](#budget)
- [Future Enhancements](#future-enhancements)
- [Achievements](#achievements)
- [Team](#team)
- [Supervisor](#supervisor)
- [Documentation](#documentation)
- [Demo](#demo)
- [License](#license)

---

# Overview

Quanta Dot is an educational robotics platform developed to encourage practical STEM education through interactive robotics. Rather than using smartphones solely for entertainment, students can use them to control and interact with a robot while learning the fundamentals of robotics, embedded systems, wireless communication, and intelligent navigation.

The robot operates in three different modes:

- Bluetooth Manual Control
- Voice Command Control
- Autonomous Obstacle Avoidance

Designed using affordable and widely available components, the project is suitable for schools, workshops, robotics clubs, and beginner-level learners.

---

# Objectives

## General Objective

To develop a low-cost educational robot that transforms passive mobile device usage into active robotics and STEM learning.

## Specific Objectives

- Design and develop a Bluetooth-controlled educational robot.
- Implement voice command-based robot navigation.
- Integrate ultrasonic obstacle detection and avoidance.
- Provide an affordable robotics learning platform.
- Promote practical STEM education.
- Increase student interest in robotics and embedded systems.
- Evaluate educational effectiveness through demonstrations and surveys.
- Develop a scalable solution suitable for classroom environments.

---

# Features

- Bluetooth-based smartphone control
- Voice command control
- Autonomous obstacle avoidance
- Real-time obstacle detection
- Intelligent navigation
- Arduino-based embedded system
- Servo-based environmental scanning
- Sound and audio interaction
- Portable battery-powered operation
- Beginner-friendly architecture
- Low-cost implementation
- Suitable for STEM education

---

# Project Highlights

- Low-cost educational robotics platform
- Supports both manual and autonomous operation
- Controlled through smartphone and voice commands
- Designed for beginner robotics education
- Built using readily available hardware components
- Suitable for schools, universities, and workshops
- Promotes practical engineering and problem-solving skills

---

# System Architecture

```
                    Smartphone
                  /             \
        Bluetooth Control    Voice Commands
                \             /
                 \           /
              HC-05 Bluetooth Module
                        │
                  Arduino Uno
                        │
      ┌─────────────────┼─────────────────┐
      │                 │                 │
 Motor Driver     Ultrasonic Sensor   Speaker/Buzzer
      │                 │
      │           Servo Motor
      │                 │
   DC Motors     Obstacle Detection
      │
 Robot Navigation
```

---

# Hardware Components

| Component | Purpose |
|------------|---------|
| Arduino Uno | Main controller |
| HC-05 Bluetooth Module | Wireless communication |
| HC-SR04 Ultrasonic Sensor | Obstacle detection |
| L298N Motor Driver | Motor control |
| SG90 Servo Motor | Environmental scanning |
| DC Gear Motors | Robot movement |
| Acrylic Chassis | Robot body |
| Microphone Module | Voice input |
| Speaker | Audio output |
| Buzzer | Alert indication |
| Li-ion Batteries | Power supply |
| Buck Converter | Voltage regulation |

---

# Software Stack

### Programming

- Embedded C/C++
- Arduino IDE

### Design

- AutoCAD

### Communication

- Bluetooth Serial Communication

### Mobile Control

- Bluetooth & Voice Control Android Application

---

# How It Works

### Bluetooth Mode

1. Pair the smartphone with the HC-05 Bluetooth module.
2. Open the mobile application.
3. Send movement commands.
4. Arduino processes the received instructions.
5. The motor driver controls the robot accordingly.

---

### Voice Command Mode

1. Connect the smartphone via Bluetooth.
2. Speak predefined commands such as:

```
Forward
Backward
Left
Right
Stop
```

3. The mobile application converts voice into commands.
4. Arduino receives the commands through Bluetooth.
5. The robot performs the requested action in real time.

---

### Autonomous Mode

1. The ultrasonic sensor continuously scans the environment.
2. If no obstacle is detected, the robot moves forward.
3. When an obstacle is found:

- Robot stops
- Servo rotates left
- Distance is measured
- Servo rotates right
- Distance is measured
- The safest direction is selected
- Robot continues moving

---

# Operating Modes

| Mode | Description |
|------|-------------|
| Bluetooth Control | Manual navigation using smartphone controls |
| Voice Command | Robot movement using voice instructions |
| Obstacle Avoidance | Autonomous navigation without user intervention |

---

# Technologies Used

## Hardware

- Arduino Uno
- HC-05 Bluetooth Module
- HC-SR04 Ultrasonic Sensor
- L298N Motor Driver
- SG90 Servo Motor
- DC Gear Motors
- Speaker
- Microphone Module
- Buzzer
- 18650 Li-ion Batteries

## Software

- Arduino IDE
- Embedded C++
- AutoCAD
- Bluetooth Controller Application
- Voice Command Application

---

# Testing and Validation

The project has been successfully tested for:

- Bluetooth communication
- Voice command recognition
- Forward movement
- Backward movement
- Left movement
- Right movement
- Emergency stop
- Obstacle detection
- Obstacle avoidance
- Servo scanning
- Power stability
- Overall system reliability

---

# Educational & Social Impact

The project aims to:

- Encourage hands-on STEM learning.
- Improve understanding of robotics and embedded systems.
- Reduce passive smartphone usage.
- Promote productive use of technology.
- Increase interest in engineering and AI.
- Provide affordable robotics education.
- Support beginner-level robotics workshops.

---

# Budget

| Item | Approximate Cost |
|------|-----------------:|
| Complete Robot | **BDT 5,000** |

---

# Future Enhancements

Future versions of the project may include:

- AI-powered voice assistant
- Computer vision
- Face recognition
- Object detection
- Gesture control
- Mobile application
- IoT connectivity
- Cloud monitoring
- Solar charging
- OLED facial expressions
- Remote learning platform

---

# Achievements

The project was presented at a robotics exhibition and project showcase and received the **Champion Award** for:

- Educational innovation
- Practical implementation
- Interactive learning
- Affordable design
- Social impact

---

# Team

| Name | Role |
|------|------|
| Arnica Sarker | Developer |
| Julias Uddin Khan | Developer |

---

# Supervisor

**A S Zaforullah Momtaz**

Assistant Professor

Department of Computer Science and Engineering

University of Asia Pacific

---

# Documentation

The complete project report is available in the **Documentation** directory.

---

# Demo

Project Demonstration

```
YouTube:
https://www.youtube.com/watch?v=yUOjvMF4w7Q&t=3s
```

---

# Repository

```
Quanta-Dot/
├── Arduino_Code/
├── Circuit_Diagram/
├── Documentation/
├── Hardware/
├── Images/
├── Videos/
├── LICENSE
└── README.md
```

---

# Contributing

Contributions are welcome.

If you would like to improve the project:

1. Fork the repository.
2. Create a new feature branch.
3. Commit your changes.
4. Push the branch.
5. Open a Pull Request.

---

# License

This project is intended for educational and research purposes.

---
