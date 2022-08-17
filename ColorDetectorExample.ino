/*
  
  ColorDetector example
  Autor: Robson C. Lins Júnior 
  17 agosto de 2022

 */
 
#include <ColorDetector.h>

ColorD sensor(26,27,30,31,32);

void setup() {
  Serial.begin(9600);

}

void loop() {
  int cor = sensor.detectColor();
  Serial.println(cor);

}
