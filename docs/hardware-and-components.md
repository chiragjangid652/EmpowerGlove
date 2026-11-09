# Hardware and Components

## Current documented build

| Component | Quantity | Purpose |
|---|---:|---|
| ESP32-C3 development board (XIAO form factor) | 1 | Main controller and Wi-Fi interface |
| SS49E linear Hall-effect sensor | 3 | Detect magnetic-field changes associated with finger movement |
| Small magnets | 3 or as required | Create a measurable magnetic field near each sensor |
| Glove / wearable base | 1 | Holds sensors and wiring in position |
| Jumper wires / flexible wire | As required | Electrical connections |
| Suitable regulated power source | 1 | Powers the prototype within board specifications |

## Optional / future modules
- OLED display
- Audio playback module or I2S amplifier/speaker
- Battery and protected charging/power-management circuit
- Custom PCB and enclosure

Confirm component variants and electrical limits from their datasheets. Do not connect a battery directly to an arbitrary board pin.
