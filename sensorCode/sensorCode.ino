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

#include <dht.h>

dht DHT;

#define DHT11_PIN 2

void setup(){
  Serial.begin(115200);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.println(DHT.temperature);
  delay(2000);
}
