/*
  
  ColorDetector cpp:
  
  Autor: Robson C. Lins Júnior 
  17 agosto de 2022

 */

#include "ColorDetector.h"

//Global variables

int red;
int green;
int blue;

ColorD::ColorD(int s0, int s1, int s2, int s3, int out)
{
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(out, INPUT);

  Ds0 = s0;
  Ds1 = s1;
  Ds2 = s2;
  Ds3 = s3;
  Dout = out;

  digitalWrite(Ds0, HIGH);
  digitalWrite(Ds1, LOW);
}

int ColorD::detectColor(){
  
  //Rotina que le o valor das cores
  digitalWrite(Ds2, LOW);
  digitalWrite(Ds3, LOW);
  //count OUT, pRed, RED
  red = pulseIn(Dout, digitalRead(Dout) == HIGH ? LOW : HIGH);
  digitalWrite(Ds3, HIGH);
  //count OUT, pBLUE, BLUE
  blue = pulseIn(Dout, digitalRead(Dout) == HIGH ? LOW : HIGH);
  digitalWrite(Ds2, HIGH);
  //count OUT, pGreen, GREEN
  green = pulseIn(Dout, digitalRead(Dout) == HIGH ? LOW : HIGH);

  //Check if red was detected
  if (red < blue && red < green && red < 100)
  {
    return 1;
  }
 
  //Check if blue was detected
  else if (blue < red && blue < green && blue < 1000)
  {
    return 2;
  }
 
  //Check if green was detected
  else if (green < red && green < blue)
  {
    return 3;
  }
  
  else{
    return -1;
  }
}
