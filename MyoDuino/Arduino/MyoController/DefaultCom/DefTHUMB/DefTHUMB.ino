#include <MyoController.h>

#define INDEX_PIN 9
#define THUMB_PIN 5
#define OTHER_PIN 1
MyoController myo = MyoController();
String pose = "";

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(INDEX_PIN, OUTPUT);
  pinMode(THUMB_PIN, OUTPUT);
  pinMode(OTHER_PIN, OUTPUT);
  
  myo.initMyo();
}

void loop()
{
   //Serial.println("HI");
   myo.updatePose();
   
   switch ( myo.getCurrentPose() ) {
    case rest:
      digitalWrite(INDEX_PIN,LOW); 
      digitalWrite(THUMB_PIN,LOW);
      Serial1.write( 1 );
      Serial.write(1) /*myo.getCurrentPose()*/ ;
      break;
    case doubleTap:
      digitalWrite(INDEX_PIN,LOW); 
      digitalWrite(THUMB_PIN,LOW);
      Serial1.write( 2 );
      Serial.write(2);
      break;
   case fist:
      digitalWrite(INDEX_PIN,LOW); 
      digitalWrite(THUMB_PIN,LOW);
      Serial1.write( 3 );
      Serial.write(3);
      break;
    case waveIn:
      digitalWrite(INDEX_PIN,HIGH); 
      digitalWrite(THUMB_PIN,HIGH);
      Serial1.write( 4 );
      Serial.write( 4 );
      break;
    case waveOut:
      digitalWrite(INDEX_PIN,HIGH); 
      digitalWrite(THUMB_PIN,HIGH);
      Serial1.write( 5 );
      Serial.write( 5 );
      break;
    case fingersSpread:
      digitalWrite(INDEX_PIN,HIGH); 
      digitalWrite(THUMB_PIN,HIGH);
      Serial1.write( 6 );
      Serial.write( 6 );
      break;

   } 
   delay(100);
}
