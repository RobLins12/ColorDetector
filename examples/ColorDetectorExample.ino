/*
  
  ColorDetector example:

  Autor: Robson C. Lins Júnior 
  17 agosto de 2022


  This library is a easy way to use color sensor
  the example above brings you the method "detectColor();", that returns a int that represents 
  a color code #

  #color red = 1
  #color blue = 2
  #color green = 3
  #none = -1 
 */
 
#include <ColorDetector.h>

#define s0 26
#define s1 27
#define s2 30
#define s3 31
#define out 32

ColorD sensor(s0, s1, s2, s3, out);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int cor = sensor.detectColor();
  Serial.println("Color code = ")
  Serial.print(cor);
}
