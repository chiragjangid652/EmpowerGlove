# Working Principle

1. **Movement:** A finger moves and changes the position/orientation of a magnet attached to the glove.
2. **Sensing:** The nearby SS49E linear Hall-effect sensor produces an analog voltage related to the magnetic field.
3. **Acquisition:** The ESP32-C3 samples the sensor outputs using its ADC inputs.
4. **Calibration and filtering:** Firmware uses measured baseline/range values and optional smoothing to reduce noise.
5. **Classification:** The readings are compared with a documented gesture map or a later validated classifier.
6. **Output:** The recognized label is sent to the display/web interface. Speech synthesis or recorded audio can be added as a separate output stage.

The exact magnet placement, sensor orientation, ADC pin mapping and thresholds must be measured on the assembled glove. Do not copy thresholds from a different board or physical setup without recalibration.
