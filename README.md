# Smart-Water-Level-Monitoring-System-
# 💧 Smart Water Level Monitoring System

An embedded system project that automatically monitors and controls water levels in a storage tank using the **PIC16F877A Microcontroller** and an **HC-SR04 Ultrasonic Sensor**. The system provides real-time water level monitoring, automatic pump control, and visual/audio alerts to improve water management and prevent overflow.

---

## 📌 Project Overview

Water scarcity and inefficient water management are growing concerns worldwide. Traditional methods of monitoring water tanks are manual, time-consuming, and prone to errors.

This project provides an automated solution that:

- Measures water level in real time
- Displays water level information on an LCD
- Automatically controls the water pump
- Uses LEDs and a buzzer for status indication
- Prevents water overflow and unnecessary water wastage

---

## 🎯 Objectives

- Design and implement a smart water level monitoring system.
- Measure water level using an HC-SR04 Ultrasonic Sensor.
- Automatically control the water pump using a relay.
- Display real-time water level information on an LCD.
- Provide visual and audio alerts using LEDs and a buzzer.

---

## ✨ Features

- 📏 Real-time water level measurement
- 🚰 Automatic motor/pump control
- 🔔 Buzzer warning system
- 💡 LED status indicators
- 📺 16×2 LCD display
- ⚡ Low-cost embedded solution
- 🔄 Continuous monitoring

---

## 🛠 Hardware Components

- PIC16F877A Microcontroller
- HC-SR04 Ultrasonic Sensor
- 16×2 LCD Display
- Relay Module
- DC Water Pump
- LEDs (Red, Blue, Green)
- Buzzer
- Power Supply

---

## 💻 Software & Tools

- MPLAB X IDE
- Embedded C
- Proteus
- KiCad PCB Designer

---

## ⚙️ System Workflow

1. Initialize the microcontroller and peripherals.
2. Read distance using the ultrasonic sensor.
3. Calculate the current water level.
4. Display the level on the LCD.
5. Turn ON LEDs based on water level.
6. Activate the buzzer when necessary.
7. Automatically control the water pump through the relay.

---

## 🚦 Water Level Indication

| Water Level | LED | Pump |
|-------------|-----|------|
| Tank Full (≤ 5 cm) | 🟢 Green | OFF |
| Medium (5–15 cm) | 🔵 Blue | ON |
| Low (15–30 cm) | 🔴 Red | ON + Buzzer |

---

## 📊 Results

- Accurate water level monitoring
- Automatic motor control
- Real-time LCD updates
- Reliable relay switching
- Cost-effective embedded solution
- Suitable for domestic water tanks

---

## 📁 Repository Structure

```
Smart-Water-Level-Monitoring-System/
│
├── Source_Code/
│   ├── main.c
│   └── config.h
│
├── Proteus/
│   └── Simulation Files
│
├── KiCad/
│   └── PCB Design Files
│
├── Images/
│   ├── Circuit Diagram.png
│   ├── PCB.png
│   ├── Hardware.jpg
│   └── Flowchart.png
│
├── Documentation/
│   └── Final_Report.pdf
│
└── README.md
```

---

## 🔮 Future Improvements

- IoT integration for remote monitoring
- Mobile application support
- Wi-Fi connectivity
- Cloud data logging
- Multiple tank monitoring
- Wireless ultrasonic sensors

---

## 📸 Project Images

### Circuit Diagram

> Add your Proteus circuit screenshot here.

### PCB Design

> Add your KiCad PCB design here.

### Hardware Implementation

> Add your hardware image here.

### Flowchart

> Add your system flowchart here.

---

## 📚 References

- Circuit Digest – HC-SR04 with PIC16F877A
- IoT Design Pro
- Arduino Project Hub
- IEEE Sensors Journal
- Instructables

---

## 👨‍💻 Authors

**F. Atheef Ahmath**

Faculty of Engineering  
SLTC Research University

---

## 📄 License

This project is developed for educational and academic purposes.
