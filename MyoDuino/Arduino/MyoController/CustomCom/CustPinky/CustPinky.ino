#include <MyoController.h>

#define MIDDLE_PIN 9
#define RING_PIN 5
#define PINKY_PIN 1
int d0 = 0;
int pose = 1;
void setup() {
  
  pinMode(d0, INPUT);
  pinMode(MIDDLE_PIN, OUTPUT);
  pinMode(RING_PIN, OUTPUT);
  pinMode(PINKY_PIN, OUTPUT);
  Serial1.begin(9600);
  Serial.begin(9600);  
}

void loop()
{
  if(Serial1.available() > 0)
  pose = Serial1.read(); 
  Serial.print(pose); //Debugging
  
  
   switch( pose) {
    case 1: //rest
      digitalWrite(MIDDLE_PIN,LOW); 
      digitalWrite(RING_PIN,LOW);
      digitalWrite(PINKY_PIN,LOW);
      break;
    case 2: //doubleTap //Middle Finger
      digitalWrite(MIDDLE_PIN,HIGH); 
      digitalWrite(RING_PIN,LOW);
      digitalWrite(PINKY_PIN,LOW);
      break;
    case 3: // fist // POinter
      digitalWrite(MIDDLE_PIN,LOW); 
      digitalWrite(RING_PIN,LOW);
      digitalWrite(PINKY_PIN,LOW);
      break;
    case 4: //waveIn //Peace Sign 
      digitalWrite(MIDDLE_PIN,HIGH); 
      digitalWrite(RING_PIN,LOW);
      digitalWrite(PINKY_PIN,LOW);
      break;
    case 5: //waveOut // Number 3
      digitalWrite(MIDDLE_PIN,HIGH); 
      digitalWrite(RING_PIN,HIGH);
      digitalWrite(PINKY_PIN,LOW);
      break;
    case 6: //fingerSpread 
      digitalWrite(MIDDLE_PIN,HIGH); 
      digitalWrite(RING_PIN,HIGH);
      digitalWrite(PINKY_PIN,HIGH);
      break;

    
   delay(100);
    
   }

}


