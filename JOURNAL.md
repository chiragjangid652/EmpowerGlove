# EmpowerGlove Development Journal

# November 10, 2026: Prototype, procurement and pre-shipment review

![Original physical EmpowerGlove prototype](media/prototype/original-prototype.jpg)

## Prototype status

The current SmartGlove Pro prototype uses a Seeed XIAO ESP32-C3 and three Hall-effect sensors mounted on the index, middle and ring fingers. The physical prototype is a fabric glove with off-the-shelf electronic modules and point-to-point wiring.

The Raspberry Pi 5 4GB and 128GB microSD card are reserved for a future upgrade; they are not part of the current prototype.

## Procurement review

The root-level [BOM.csv](BOM.csv) records the components visible in the supplied Robocraze and Amazon cart screenshots, plus the XIAO ESP32-C3 at a provisional supplier-page estimate.

- Robocraze cart total shown: **₹17,373**
- Amazon cart subtotal shown: **₹903**
- Original cart total: **₹18,276**
- XIAO ESP32-C3 provisional estimate: **₹739**
- Provisional BOM total: **₹19,015**, excluding shipping and any price changes

Cart entries are planned purchases, not proof that the parts have been purchased or installed. Confirm exact product listings, compatibility, quantities and checkout prices before ordering. Shipping has not been quoted in the screenshots; add the actual checkout shipping charge to the BOM when known.

## CAD and PCB status

No custom enclosure CAD, mechanical assembly, custom PCB layout or Gerber set has been designed for this version. The prototype uses a fabric glove, off-the-shelf development/sensor modules and point-to-point wiring. Therefore, there are no genuine STEP, source CAD or PCB fabrication files to provide at this stage.

If a custom enclosure, carrier PCB or mounting bracket is designed in a later revision, add the editable source files and STEP exports where applicable. Do not use placeholder fabrication files.

## Wiring and system documentation

The repository includes a [conceptual wiring diagram](docs/wiring.md) and a system overview in the [README](README.md). The wiring diagram deliberately leaves GPIO assignments unconfirmed until the exact XIAO ESP32-C3 board revision and physical connections are verified. It is a conceptual connection guide, not a pin-accurate schematic.

## Pre-shipment checklist

- [x] Current controller identified as Seeed XIAO ESP32-C3.
- [x] Raspberry Pi 5 and microSD card marked as future upgrades.
- [x] Original prototype photograph added to this journal and README.
- [x] BOM CSV and README BOM table added.
- [x] Conceptual wiring diagram and system overview documented.
- [ ] Confirm the exact Hall sensor module type and final quantity.
- [ ] Verify GPIO mapping and update the wiring diagram with actual connections.
- [ ] Confirm battery protection, charging, polarity, current draw and safe mounting.
- [ ] Add photographs of actual sensor wiring and the working Wi-Fi dashboard.
- [ ] Update BOM with final checkout prices and shipping once known.
- [ ] Test gesture recognition repeatedly and record measured results before claiming reliability.

## Notes

This entry records the project state and cart information available on November 10, 2026. Prices and availability can change. The prototype is experimental and is not a certified medical or accessibility device.
