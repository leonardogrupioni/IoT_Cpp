# 📡 IoT Projects with ESP32, Arduino & C++

This repository contains a collection of IoT projects and embedded systems developed using **ESP32**, **Arduino**, and **C++**. The projects range from sensor and actuator tests to real-world applications like a smart doorbell and an automated aquarium feeder.

---

## 🚀 Highlight Projects

### 🔔 Smart Doorbell with ESP32-CAM & Telegram

A compact smart doorbell built using an **ESP32-CAM**, capable of:

- Detecting button press (or motion)
- Capturing an image via the camera
- Sending the image to a **Telegram chat** using the **Telegram Bot API**
- Communicating via HTTP

📁 Folder: `Codigo_ESP32-CAM_Campainha`  
🛠 Tech: ESP32-CAM, HTTPClient, Telegram Bot API

---

### 🐟 Autonomous Aquarium Feeder

A simple yet effective system to **automatically feed fish** in an aquarium using an Arduino and servo motor.

- Adjustable feeding schedule
- Simple user configuration
- Test-friendly structure

📄 File: `Projeto_Final_PSI_Aquario_Autonomo.pdf`  
📁 Code base: Inside `sketch_*` and `Servo_Teste/`

---

## 📦 Other Content

- `legoSolar.ino`: early prototype logic for solar tracking (LDR + servo)
- `RastreadorSolar_01/`: solar tracking system v1.0 with ESP32
- `buzzer.ino`: buzzer behavior test
- `PUC/`: project exercises and files from university coursework

---

## 🛠 Technologies

- **Language:** C++  
- **Microcontrollers:** ESP32, ESP32-CAM, Arduino Uno/Nano  
- **Protocols:** HTTP, Serial  
- **Tools:** Arduino IDE, PlatformIO, Telegram Bot API

---

## 🔧 How to Run

1. Open `.ino` files using the Arduino IDE or VS Code + PlatformIO.
2. Select the correct board (e.g., `ESP32 Dev Module`).
3. Install required libraries (see `libraries/` folder or use Library Manager).
4. Compile and upload via USB or OTA.
5. Use Serial Monitor or Telegram for feedback/output.

---

## 👨‍💻 Author

Developed by [Leonardo Grupioni](https://github.com/leonardogrupioni)  

---

## 📄 License

All content is for educational and personal use.  
