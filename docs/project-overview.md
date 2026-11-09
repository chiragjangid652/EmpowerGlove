# Project Overview

## Problem statement
People who communicate through hand gestures may encounter barriers when the other person does not understand those gestures. EmpowerGlove explores an electronic aid that can recognize a defined set of hand configurations and present a corresponding text label, with speech output as a possible extension.

## Aim
Develop and evaluate a wearable prototype that senses selected finger movements and maps sensor patterns to predefined gesture labels.

## Current scope
The current SmartGlove Pro hardware iteration uses an ESP32-C3 and three SS49E Hall-effect sensors placed to sense movement associated with the index, middle and ring fingers.

## Objectives
- Acquire repeatable sensor readings.
- Calibrate readings for each user and glove fit.
- Build a documented gesture-to-label mapping.
- Display recognized labels through a local interface.
- Evaluate recognition accuracy and response time.
- Explore speech output after the gesture pipeline is reliable.

## Limitations
Three sensors cannot represent every hand shape or a complete sign language. A small set of predefined gestures is not equivalent to interpreting a natural sign language. The project must clearly state which gestures it supports and test them with appropriate users and guidance.
