# Obstacle-Avoiding-Robot-Car
An academic project focused on integrating hardware and software to create a self-navigating car. Built using Arduino UNO, this car detects obstacles with ultrasonic sensors and autonomously adjusts direction. The project helped deepen my understanding of embedded systems, logic building, and team-based hardware development.


## 📦 Components Used

- Arduino UNO board
- Ultrasonic Sensor (HC-SR04)
- L298N Motor Driver
- 2 DC Geared Motors with Wheels
- 9V Battery Pack
- Jumper Wires
- DIY Cardboard Chassis

---


## 💡 How It Works

- The **ultrasonic sensor** measures distance from nearby objects.  
- If an obstacle is detected within a preset range, the car **pauses and reroutes**.  
- The **Arduino UNO** executes the logic and controls the motors via the **L298N driver**.


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

## 📸 Project Photos
![car1](https://github.com/user-attachments/assets/741b441e-0efe-4200-88cd-8b67c50acf16)

---

![car](https://github.com/user-attachments/assets/1e3f93be-5a47-4091-b0f2-b52aedc29eee)
---


![car2](https://github.com/user-attachments/assets/60a0f807-2668-4730-ae2e-cde75f2552af)

________________________________________________________________________________________________________________________________________________________________________________________________
✨ Skills Gained

- **Hardware Assembly** & Circuit Debugging  
- Sensor & Motor Integration  
- Arduino-based Logical Planning  
- Version Control & Documentation  
- Communication and Teamwork  
- Initiative to self-learn Arduino coding

___________________________________________________________________________________________________________________________________________________________________________________________________


## 🔧 Personal Contribution & Reflection

> **This was a collaborative build.** I contributed to the **physical setup, wiring**, and **design logic**. Although I wasn’t involved in the initial Arduino coding, I’m already proficient in **C++**, and have begun independently learning **Arduino programming and embedded logic**.  
> This repository documents my progress as I take full technical ownership, preparing for deeper work in **robotics and embedded systems**.
----
## ✅ Why This Project Matters

This project represents my **drive to go beyond classroom theory** — it taught me not only how hardware works but how to **translate logic into physical action**. I plan to evolve this project further with enhancements like Bluetooth control and obstacle memory using basic ML algorithms.


