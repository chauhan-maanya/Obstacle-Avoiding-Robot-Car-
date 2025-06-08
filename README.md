# Obstacle-Avoiding-Robot-Car
This project is an academic guided project where I contributed and learned the fundamentals of integrating hardware and software. The goal was to build a robot car that can detect and avoid obstacles autonomously using ultrasonic sensors and Arduino programming.

## 📦 Components Used

- Arduino UNO board
- Ultrasonic Sensor (HC-SR04)
- L298N Motor Driver
- 2 DC Geared Motors with Wheels
- 9V Battery Pack
- Jumper Wires
- DIY Cardboard Chassis

---

## 💻 How It Works

- The ultrasonic sensor measures distance from nearby obstacles.
- If an obstacle is detected within a certain range, the car stops and changes direction.
- The Arduino UNO handles logic and sends movement commands to the motors via L298N.

---

## 🔌 Circuit Diagram Overview

- Ultrasonic sensor is connected to Arduino pins for trigger and echo.
- Motors are connected to the L298N motor driver.
- L298N receives input signals from Arduino and power from battery pack.

---

## 📍Pin Connections (can be customized)

| Component          | Arduino Pin |
|-------------------|-------------|
| Ultrasonic Trigger| D9          |
| Ultrasonic Echo   | D10         |
| Motor IN1         | D5          |
| Motor IN2         | D6          |
| Motor IN3         | D7          |
| Motor IN4         | D8          |

---

## 🧠 Code Logic Summary

- Initialize sensor and motor pins
- Read ultrasonic distance
- If obstacle < 15 cm:
  - Stop car and turn
- Else:
  - Move forward

```cpp
// Sample Code Snippet
if (distance < 15) {
  stopMotors();
  turnRight();
} else {
  moveForward();
}
```
___________________________________________________________________________________________________________________________________________________________________________________________________

## 📸 Project Photos-
![car1](https://github.com/user-attachments/assets/741b441e-0efe-4200-88cd-8b67c50acf16)

---
![car](https://github.com/user-attachments/assets/1e3f93be-5a47-4091-b0f2-b52aedc29eee)
---

![car2](https://github.com/user-attachments/assets/60a0f807-2668-4730-ae2e-cde75f2552af)

________________________________________________________________________________________________________________________________________________________________________________________________
✨ Skills Gained
Hardware Assembly & Circuit Debugging

Sensor Integration (Ultrasonic + Motors)

Basic Arduino Workflow

Team Coordination & Documentation

Future Readiness for Coding and Expansion

___________________________________________________________________________________________________________________________________________________________________________________________________

📍 Note

This was a collaborative build. I worked on the physical setup, wiring, and planning logic. Now, I’m actively learning the coding part myself using online tutorials to fully understand and replicate it.

