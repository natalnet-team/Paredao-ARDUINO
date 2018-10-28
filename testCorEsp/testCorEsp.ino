//Apresentacao cientec 2018
#include <Adafruit_NeoPixel.h>
#include "Adafruit_TCS34725.h"

#define PIN1         7 //15//d8



Adafruit_NeoPixel seq1 = Adafruit_NeoPixel(83, PIN1, NEO_GRB + NEO_KHZ800);

Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

#define commonAnode true
byte gammatable[256];

struct RGB {
  int r1;
  int g1;
  int b1;
};

void setup() {
  seq1.begin();
   
  Serial.begin(9600);

  if (tcs.begin()) {
   // Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }

  for (int i = 0; i < 256; i++) {
    float x = i;
    x /= 255;
    x = pow(x, 2.5);
    x *= 255;

    if (commonAnode) {
      gammatable[i] = 255 - x;
    } else {
      gammatable[i] = x;
    }
    //Serial.println(gammatable[i]);
  }

}
 
void ColunaGeral(int n,RGB color, int d);
void animacao6 ( int delay6,RGB color);
void animacao4(RGB color, int delay4);
void apagar();

void loop() {
  
  uint16_t clear, red, green, blue;

  tcs.setInterrupt(false);      // turn on LED

  delay(60);  // takes 50ms to read

  tcs.getRawData(&red, &green, &blue, &clear);

  tcs.setInterrupt(true);  // turn off LED


  uint32_t sum = clear;
  float r, g, b;
  r = red; r /= sum;
  g = green; g /= sum;
  b = blue; b /= sum;
  r *= 256; g *= 256; b *= 256;

RGB color; 
  color.r1 = r;
  color.g1 = g;
  color.b1 = b;
if(color.g1>color.b1||color.r1>color.b1)
{
  color.b1=color.b1-55;
if(color.b1<0)color.b1=0;
}
if(color.g1>color.r1)
{
  color.r1=color.r1-20;
if(color.r1<0)color.r1=0;
}
if(color.r1>color.g1)
{
  color.g1=color.g1-40;
  if(color.g1<0)color.g1=0;
}
if(color.b1>color.g1)
{
  color.g1=color.g1-40;
  if(color.g1<0)color.g1=0;
}
if(color.b1>color.r1)
{
  color.r1=color.r1+50;
  
}
 
Serial.println('1');
//animacao4(color,200);
//apagar();
delay(500);
for(int i=0;i<83;i++)
{
seq1.setPixelColor(i, seq1.Color(color.b1, color.r1, color.g1));
seq1.show();
}
}
void ColunaGeral(int n,RGB color, int d)
{
  if (n == 0)
  {
    for (int i = 75; i <= 83; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
  if (n == 1)
  {
     for (int i = 62; i <= 74; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
  if (n == 2)
  {
     for (int i = 54; i <= 61; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
  if (n == 3)
  {
    for (int i = 48; i <= 51; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
  if (n == 4)
  {
     for (int i = 44; i <= 47; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
  if (n == 5)
  {
     for (int i = 36; i <= 39; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();;
  }
  if (n == 6)
  {
    for (int i = 32; i <= 35; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
  if (n == 7)
  {
    for (int i = 22; i <= 29; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
  if (n == 8)
  {
    for (int i = 8; i <= 21; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
  if (n == 9)
  {
    for (int i = 0; i <= 7; i++)
    {
      seq1.setPixelColor(i, seq1.Color( color.b1, color.r1, color.g1));
    }
    seq1.show();
  }
}
void animacao6 ( int delay6,RGB color)
{
  int cont = 0;
  RGB color1; 
  color1.r1 = 0;
  color1.g1 = 0;
  color1.b1 = 0;
  do
  {
    for (int i = 9, j = 0; i >= 0; i-- && j++)
    {
      ColunaGeral(i,color, delay6);
      delay(delay6);
      ColunaGeral(j, color, delay6);
      delay(delay6);
      ColunaGeral(i,color1, delay6);
      delay(delay6);
      ColunaGeral(j, color1, delay6);
      delay(delay6);
    }
    cont++;
  }
  while (cont < 10);
}
void animacao4(RGB color, int delay4)
{
  int cont = 0;
  do
  {   
      seq1.setPixelColor(51, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      seq1.setPixelColor(48, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      seq1.setPixelColor(32, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      seq1.setPixelColor(35, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      delay(delay4); 
      apagar();
      seq1.setPixelColor(38, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      seq1.setPixelColor(45, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      seq1.setPixelColor(37, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      seq1.setPixelColor(46, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      delay(delay4); 
      apagar();
      for(int i=0,j=83;i<30;i++&&j--)
      {
      seq1.setPixelColor(i, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      seq1.setPixelColor(j, seq1.Color(color.b1, color.r1, color.g1));
      seq1.show(); 
      }
      delay(delay4); 
      apagar();
    cont++;
  }
  while (cont <20);
}
void apagar()
{
  RGB color1;
   color1.r1 = 0;
  color1.g1 = 0;
  color1.b1 = 0;
  for (int i = 0; i < 84; i++)
  {
    seq1.setPixelColor(i, seq1.Color(0, 0, 0));
    
  }
  seq1.show();
 
}
 
