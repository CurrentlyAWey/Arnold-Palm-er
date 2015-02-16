# Palmitron
The HandyAndy is a prosthetic hand which measures forearm contractions using Myo and actuates these
contractions in a robotic hand using Arduino (micro-controller) technology integrated with LittleBits. 
A Myo sensor and two Arduino Leonardos, provided by Thalmic labs and LittleBits.cc respectively, 
were used in this project.   

The Myo sends EMG information describing the muscle contractions, which are then interpreted into 
gestures by the computer. Support for more/custom gestures will hopefully be included in upcoming releases by 
the Myo development team; until then, we are limited to a maximum of 4 "custom" gestures (6 total, but 
2 are reserved for doubleTap and rest).

The "THUMB" Arduino receives gesture information from Serial, directly controls the 
thumb and index fingers, and forwards the gesture data to the "PINKY" Arduino via Serial1 Connection. 

The "PINKY" Arduino receives gesture information from Serial1, and directly controls the 
middle, ring, and pinky finger outputs. Note that the ring and pinky fingers are linked together, 
since it is naturally difficult to control them independently.
	
Default COM (command) files cause the hand to mimic the gestures performed by the user; 
Either all fingers open or closed. 
	
Custom command files require prior calibration to work as advertised. It's important to note that the 
need for these custom command files may be rendered void by a large number of available gestures we can store. 

The MyoDuino.exe file in bin is the interface between the Myo (Bluetooth i/o) and the Arduino (Serial i/o). 
At present, the hand must be connected to both a power source and the USB Port to receive serial communication 
about which gesture is being performed. Additionally, the option remains to connect the "PINKY" Arduino to a 
serial output as a debugging measure.

Further applications of this innovation could be used in hazardous work environments. 
For example, the LeapMotion API could be incorporated into this innovation in the future in order to allow 
for use in hazardous work environments (e.g. nuclear power plants, space missions where precision is needed, etc.).	
