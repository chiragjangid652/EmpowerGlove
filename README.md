# EmpowerGlove – Smart Glove

> An assistive wearable prototype designed to translate hand gestures into readable text and, as the project develops, spoken output to support communication.

**Project:** EmpowerGlove – Smart Glove  
**Hardware build documented here:** SmartGlove Pro — ESP32-C3 + 3 SS49E Hall-effect sensors  
**Repository status:** Prototype / active development  
**Visibility target:** Public

---

## Overview

EmpowerGlove is a student-built assistive technology project exploring how hand gestures can be detected electronically and presented as communication output. The current SmartGlove Pro prototype uses three SS49E Hall-effect sensors connected to an ESP32-C3 development board. Sensor readings are processed by firmware to identify supported gestures.

The prototype has also been explored with a Wi-Fi access-point web interface that can display the recognized gesture and sensor readings on a phone or computer.

> **Important:** This repository is a development record, not a certified medical or accessibility device. Gesture coverage, recognition accuracy, reliability and safety must be tested before any real-world dependence.

## Current prototype

- Controller: ESP32-C3 (XIAO ESP32-C3 form factor)
- Gesture sensing: 3 × SS49E linear Hall-effect sensors
- Sensor positions: index, middle and ring fingers
- Interface experiment: ESP32-C3 Wi-Fi access point and browser-based dashboard
- Intended outputs: gesture text; speech output is a planned/optional development item

Hardware and firmware may change as the prototype evolves. Check the documentation and release notes before building.

## Repository map

```text
EmpowerGlove/
├── README.md
├── LICENSE
├── CONTRIBUTING.md
├── SECURITY.md
├── CHANGELOG.md
├── .gitignore
├── docs/
│   ├── project-overview.md
│   ├── working-principle.md
│   ├── hardware-and-components.md
│   ├── wiring.md
│   ├── testing-and-calibration.md
│   └── roadmap.md
├── firmware/
│   └── esp32-c3/
│       ├── README.md
│       └── src/
│           └── main.ino
├── web-interface/
│   └── README.md
├── gestures/
│   └── gesture-dataset-template.csv
├── hardware/
│   ├── README.md
│   ├── circuit/
│   │   └── README.md
│   └── enclosure/
│       └── README.md
├── media/
│   ├── README.md
│   ├── project/
│   ├── prototype/
│   └── circuit/
└── .github/
    └── ISSUE_TEMPLATE/
        ├── bug_report.md
        └── feature_request.md
```

## Getting started

1. Read [Project overview](docs/project-overview.md).
2. Review [Hardware and components](docs/hardware-and-components.md) and [Wiring](docs/wiring.md).
3. Install the Arduino IDE and the ESP32 board package appropriate for your ESP32-C3 board.
4. Open `firmware/esp32-c3/src/main.ino`.
5. Confirm the exact board pin mapping and sensor output range for your physical build before uploading firmware.
6. Record calibration measurements in `docs/testing-and-calibration.md` and gesture samples in `gestures/`.

The starter firmware intentionally contains pin placeholders. **Do not assume GPIO numbers from this template match your wiring.** Set the correct pins for your specific board before testing.

## Documentation

- [Project overview](docs/project-overview.md)
- [Working principle](docs/working-principle.md)
- [Hardware and components](docs/hardware-and-components.md)
- [Wiring notes](docs/wiring.md)
- [Testing and calibration](docs/testing-and-calibration.md)
- [Development roadmap](docs/roadmap.md)

## Photos and demonstrations

Add original project photos to `media/project/`, prototype close-ups to `media/prototype/`, and circuit images to `media/circuit/`. Reference them in this README using relative paths, for example:

```markdown
![EmpowerGlove prototype](media/project/prototype-front.jpg)
```

Only add images you have permission to share. Avoid including faces, school IDs, phone numbers, Wi-Fi passwords or other personal information without permission.

## Contributing

This is a student research and engineering project. Suggestions, bug reports and improvements are welcome. Please read [CONTRIBUTING.md](CONTRIBUTING.md) before opening a pull request.

## License

Released under the MIT License. See [LICENSE](LICENSE).

## Acknowledgements

Built as an educational assistive-technology prototype. Add mentor, school, competition and collaborator acknowledgements here only with their permission.
