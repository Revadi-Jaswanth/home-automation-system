# Task 2: Home Automation System

## Components
- ESP8266 NodeMCU
- 2‑channel relay module
- Breadboard & jumper wires
- Smartphone with Blynk app

## Implementation Steps
1. **Circuit Setup**  
   - Connect relay IN1 to D1, IN2 to D2.  
   - Relay VCC→5V (or 3.3V), GND→GND.  
   - Connect relays’ COM/NO to appliance circuits or LEDs for testing.
2. **Blynk Configuration**  
   - Create a Blynk project; add two buttons on V1 and V2.
3. **Upload Code**  
   - Insert Blynk template/auth and Wi‑Fi credentials in `HomeAutomation.ino`.
   - Upload to NodeMCU.
4. **Test**  
   - Toggle buttons in Blynk app to switch devices.
