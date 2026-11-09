# ESP32-C3 Firmware

Open `src/main.ino` in Arduino IDE.

Before uploading:
1. Select the exact ESP32-C3 board.
2. Set the three analog-capable GPIO numbers for your board in the source.
3. Confirm sensor output voltage is within the ADC input limits.
4. Calibrate the sensors and update the gesture logic.
5. Test with USB power before attempting battery operation.

This starter sketch only reads the configured analog inputs and prints raw values. It does not yet implement validated gesture recognition or a web server.
