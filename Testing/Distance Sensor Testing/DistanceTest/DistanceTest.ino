#include <Wire.h>
#include "Adafruit_VCNL4010.h"


Adafruit_VCNL4010 vcnl;

void setup() {
  Serial.begin(9600);
  Serial.println("VCNL4010 test");

  if (! vcnl.begin()){
    Serial.println("Sensor not found :(");
    while (1);
  }
  Serial.println("Found VCNL4010");
}


void loop() {
   //Serial.print("Ambient: "); Serial.println(vcnl.readAmbient());
   Serial.print("Proximity: "); Serial.println(vcnl.readProximity());
   Serial.print("Test: "); Serial.println(pow(2.71828,log(68000/vcnl.readProximity())));
   int distance = map(vcnl.readProximity(), 2200, 20000, 10, 1);
   Serial.print("Map Test: "); Serial.println(distance);
   delay(2000);
}
