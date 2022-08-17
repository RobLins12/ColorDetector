/*
  
  ColorDetector example
  Autor: Robson C. Lins Júnior 
  17 agosto de 2022

 */

#include "Arduino.h"

 #ifndef ColorDet
 #define ColorDet
 

 class ColorD{

    public:

      ColorD(int s0, int s1, int s2, int s3, int out);
      int detectColor();
    
    private:
      int Ds0;
      int Ds1;
      int Ds2;
      int Ds3;
      int Dout;

 };


 #endif
