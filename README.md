# 🌱 Smart Agro IoT System — ESP32 (SIH 2025)

## Overview

This project was developed as part of Smart India Hackathon 2025 (Hardware category), where our team **Team Electrominds** qualified through all 3 internal rounds.

The aim was to improve farming in hilly regions by using sensor-based monitoring, automation, and IoT.

---

## Problem Statement

Farming in hilly regions faces:

* Uneven terrain
* Unpredictable rainfall
* Difficulty in monitoring crops

This leads to low yield and inefficient resource usage.

---

## What We Built

* ESP32-based multi-sensor monitoring system
* Automated irrigation using soil moisture
* Environmental monitoring (temperature, humidity, light)
* IoT-based data transmission
* Concept for drone-based modular sensing

---

## System Working

* Sensors collect real-time data:

  * Soil moisture
  * Temperature & humidity
  * Light intensity

* ESP32 processes this data:

  * If soil is dry → pump turns ON
  * If soil is sufficient → pump turns OFF

* Data is sent to IoT platform for monitoring

---

## Components Used

* ESP32
* Soil Moisture Sensor
* DHT11 Temperature Sensor
* LDR Sensor
* Relay Module
* Water Pump
* Breadboard & Jumper Wires
* External Power Supply

---

## Challenges Faced

* ESP32 was not detected initially
  → Resolved by installing proper drivers

* System was unstable on USB power
  → Solved using external AC-DC power supply

---

## Impact (Expected)

* ~20–30% improvement in efficiency
* Reduced manual effort
* Better irrigation control
* Suitable for hilly terrain farming

---

## Future Scope

* Rainfall prediction using ML (Python)
* Full IoT dashboard
* Drone-based sensor integration
* Smart recommendations for farmers

---

## 📁 Project Structure

smart_agro_esp32.ino
README.md
images/

---

## Note

This project was part of Smart India Hackathon 2025 and involved both hardware implementation and system-level design for real-world agricultural problems.
