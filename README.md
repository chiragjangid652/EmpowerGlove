
# 🧤 EmpowerGlove
### AI-Powered Assistive Communication Glove

<p align="center">
  <b>Breaking Communication Barriers Through Technology</b>
</p>

<p align="center">
  <img src="images/prototype.jpg" width="350" alt="EmpowerGlove Prototype">
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Platform-ESP32--C3-blue">
  <img src="https://img.shields.io/badge/Project-Assistive%20Technology-purple">
  <img src="https://img.shields.io/badge/Status-Prototype-orange">
  <img src="https://img.shields.io/badge/License-MIT-green">
</p>

## 📌 About The Project

EmpowerGlove is a wearable assistive communication device designed to help bridge communication barriers faced by people with speech and hearing impairments.

The system uses electronic sensors to detect hand and finger movements, processes the sensor readings through a microcontroller, and identifies predefined gestures.

The recognised gestures can be displayed and converted into audio output, helping users communicate more conveniently.

## 🎯 Problem Statement

Communication can become challenging when a person who uses sign language interacts with someone who does not understand it.

EmpowerGlove aims to make this interaction easier through an affordable, portable and wearable electronic solution.

## 💡 Our Solution

We developed a smart glove that:

- Detects finger movements using sensors.
- Processes sensor readings using an ESP32-C3.
- Recognises predefined hand gestures.
- Displays recognised gestures through a display interface.
- Provides voice output for recognised gestures.

## ⚙️ Hardware Components

| Component | Purpose |
|---|---|
| ESP32-C3 | Main processing unit |
| SS49E Hall Sensors | Detect finger movements |
| OLED Display | Display gesture information |
| Rechargeable Battery | Portable power supply |
| Connecting Wires | Electrical connections |
| Glove | Wearable platform |

## 🔬 Working Principle

1. The user performs a hand gesture.
2. Hall Effect sensors detect changes in magnetic fields caused by finger movement.
3. Sensor readings are transmitted to the ESP32-C3.
4. The microcontroller processes the readings.
5. The readings are compared with predefined gesture patterns.
6. The recognised gesture is displayed and, where implemented, converted into speech.

## 🧠 Technology Used

- Embedded Systems
- ESP32-C3 Microcontroller
- Hall Effect Sensing
- Gesture Recognition
- Wireless Communication
- Assistive Technology

## ✨ Key Features

- Wearable and portable design.
- Real-time sensor data processing.
- Gesture recognition.
- Wireless connectivity.
- Display and voice output (as implemented).
- Expandable gesture library.

## 📁 Repository Structure

```text
EmpowerGlove/
├── hardware/
├── software/
├── documentation/
├── images/
├── README.md
└── LICENSE
```

## 🚀 Getting Started

### Requirements

- ESP32-C3 development board
- SS49E Hall Effect sensors
- USB cable
- Arduino IDE
- Required libraries, depending on the firmware

### Installation

1. Install Arduino IDE.
2. Install the ESP32 board package.
3. Connect the ESP32-C3 to your computer.
4. Open the project firmware from the software folder.
5. Select the correct ESP32-C3 board and COM port.
6. Upload the firmware.
7. Connect and test the sensors.

Refer to the hardware documentation for the actual wiring and pin configuration.

## 🔮 Future Scope

- Expand the gesture vocabulary.
- Improve recognition accuracy.
- Introduce AI-based gesture classification.
- Develop a dedicated mobile application.
- Add multilingual voice output.
- Improve battery life and wearable comfort.

## 🌍 Impact

EmpowerGlove aims to support inclusive communication by exploring affordable wearable technology for people with communication difficulties.

## 👨‍💻 Project Information

**Project Name:** EmpowerGlove  
**Category:** Assistive Technology  
**Platform:** ESP32-C3  
**Development:** Hardware and Embedded Software

## 📜 License

This project is licensed under the MIT License.

---

<p align="center">
  <b>EmpowerGlove – Technology for a More Inclusive World ❤️</b>
</p>
