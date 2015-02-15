# HandyAndy-Tentative-Name-
Prosthetic Hand which measures forearm contractions using Myo and actuates these contractions in a robotic hand using 2 Arduinos

2 Arduino Leonardos were used in this project, provided by LittleBits.cc, as well as a Myo

The Myo sends EMG Information about the Muscle Contractions, which are then interpreted into Gestures. 
Support for more gestures and custom gestures will hopefully be included in upcoming releases by the Myo team; 
until then, we are limited to a maximum of 4 "custom" Gestures (6 total, but 2 are reserved for doubleTap and rest).

The "THUMB" Arduino receives gesture information from Serial, directly controls the Thumb and Index fingers, 
	and forwards the gesture data to the "PINKY" Arduino via Serial1 Connection.
The "PINKY" Arduino receives gesture information from Serial1, and directly controls the Middle, Ring, and Pinky Fingers. Note that 
	the Ring and Pinky fingers are linked together.
	
	Default COM files cause the hand to mimic the gestures performed by the user; Either all fingers open or closed
	Custom Command files require prior calibration to work as advertised. 
		It's important to note that the need for these custom command files may be rendered void by an large number
			of available gestures we can store. 
			
The MyoDuino.exe file in bin is the interface between the Myo (Bluetooth i/o) and the Arduino (Serial i/o)
	At present, the hand must be connected to both a power source and the USB Port to receive serial communication about 
		which gesture is being performed.
	Additionally, the option remains to connect the "PINKY" Arduino to a serial output as a debugging measure.
	
	