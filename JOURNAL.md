# EmpowerGlove Development Journal

## 2026-11-10 — BOM and pre-shipment documentation

### Cart review
Recorded the clearly visible parts from the Robocraze and Amazon cart screenshots in the root-level `BOM.csv`. The CSV preserves the displayed unit prices and quantities and labels all entries as planned/cart-listed rather than purchased or installed.

- Robocraze cart total shown: **₹17,373**
- Amazon cart subtotal shown: **₹903**
- Combined visible cart value: **₹18,276**
- The screenshots show a 15-item Robocraze cart; the visible line items reconcile to the displayed total. The Amazon screenshot shows three line items.

### Important architecture note
The current documented SmartGlove Pro prototype is based on an **ESP32-C3 and three SS49E Hall-effect sensors**. The cart includes a **Raspberry Pi 5 4GB**, a 128GB microSD card and five SmartElex Hall sensor modules. These are recorded as planned/cart-listed items, not as parts already integrated into the current prototype. Confirm whether the Raspberry Pi is intended as a separate future compute/audio platform before treating it as part of the current build.

### CAD and PCB files
No custom enclosure CAD, mechanical assembly, or custom PCB has been designed for the documented prototype at this stage. The build uses a wearable glove, off-the-shelf development/sensor modules, and point-to-point wiring. Therefore, there is no genuine source CAD, PCB layout, Gerber set, or STEP assembly to publish yet. Do not create placeholder fabrication files that could be mistaken for manufacturing-ready designs.

If a custom enclosure, carrier PCB, or mounting bracket is designed later, add its editable source files and export a STEP model (where applicable) before shipment.

### Before shipment checklist
- [ ] Confirm the final controller architecture (ESP32-C3 alone, or Raspberry Pi 5 as an additional platform).
- [ ] Confirm the exact Hall sensor module and count; the current documented build uses three SS49E sensors.
- [ ] Confirm actual purchased quantities and update `BOM.csv` with final supplier/order details.
- [ ] Verify battery protection, charging, polarity, current draw, and safe mounting before wearable use.
- [ ] Add original prototype, wiring, and working-interface photographs.
- [ ] Add CAD/STEP and PCB source files only if custom mechanical/electronic designs are created.
- [ ] Test gesture recognition repeatedly and document results before claiming reliable operation.

## Notes
This journal records the project state and planned procurement based on the screenshots available on this date. Cart prices and availability may change; a cart is not proof of purchase.
