//apresentacao cientec 2018
#include <Adafruit_NeoPixel.h>


#define PIN1           8

Adafruit_NeoPixel seq1 = Adafruit_NeoPixel(83, PIN1, NEO_GRB + NEO_KHZ800);


void setup() {
seq1.begin();
Serial.begin(9600);
}

void loop() {
  
anim1();
anim2();
anim3();
}
void anim1()
{
  int c7=0,c8=255,c9=0,d=650;
 while(c7<=254){ 
  for (int i = 0; i <= 83; i++ )
    {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));        
       
    } seq1.show();
     c7=c7+3;
if(c7>=255)
    {  
      c7=255; 
    }
     
    d=d-25;
    if(d==75)
    {
      d=650;
    }
    delay(d);
     for (int i = 0; i <= 83; i++ )
    {
        seq1.setPixelColor(i, seq1.Color(0, 0, 0));        
        
    }seq1.show();
    delay(d);
  Serial.print("\tc7:\t"); Serial.print(c7);
  Serial.print("\tc8:\t"); Serial.print(c8);
  Serial.print("\tc9:\t"); Serial.print(c9);
  Serial.print("\td:\t");Serial.println(d);
 }
}
void anim2()
{
  int c7=0,c8=0,c9=14,d=400;
 while(c8<=254){ 
  for (int i = 0; i <= 83; i++ )
    {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));        
       
    } seq1.show();
     c8=c8+2;
    if(c8>=255)
    {
      
      c8=255;
    }
    
    
    d=d-10;
    if(d==100)
    {
      d=400;
    }
    delay(d);
     for (int i = 0; i <= 83; i++ )
    {
        seq1.setPixelColor(i, seq1.Color(0, 0, 0));        
        
    }seq1.show();
    delay(d);
  Serial.print("\tc7:\t"); Serial.print(c7);
  Serial.print("\tc8:\t"); Serial.print(c8);
  Serial.print("\tc9:\t"); Serial.print(c9);
  Serial.print("\td:\t");Serial.println(d);
 }
}
void anim3()
{
  int c7=50,c8=25,c9=0,d=200;
 while(c9<=254){ 
  for (int i = 0; i <= 83; i++ )
    {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));        
       
    } seq1.show();
     c9++;
if(c9>=255)
    {  
      c9=255; 
    }   
    d=d-5;
   if(d==50)
    {
      d=200;
    }
    delay(d);
     for (int i = 0; i <= 83; i++ )
    {
        seq1.setPixelColor(i, seq1.Color(0, 0, 0));        
        
    }seq1.show();
    delay(d);
  Serial.print("\tc7:\t"); Serial.print(c7);
  Serial.print("\tc8:\t"); Serial.print(c8);
  Serial.print("\tc9:\t"); Serial.print(c9);
  Serial.print("\td:\t");Serial.println(d);
 }
}
