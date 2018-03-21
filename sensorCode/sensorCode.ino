// #define SENSORPIN A0

// unsigned long targetTime=0;
// const unsigned long intervall=2000;
// void setup(){
// Serial.begin(115200);
// }


// void loop(){
// 	if(millis()>=targetTime){
// 		Serial.println(analogRead(SENSORPIN));
// 		targetTime= millis()+intervall;
// 	}
// }

#include "includes/dht.h"
#include "includes/dht.cpp"

dht DHT;

#define DHT11_PIN 2

void setup(){
  Serial.begin(115200);
}

void loop()
{
	Serial.println('got to loop')
  int chk = DHT.read11(DHT11_PIN);
  Serial.println(DHT.temperature);
  delay(2000);
}
