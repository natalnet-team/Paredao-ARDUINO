//Apresentacao cientec 2018
#include <Adafruit_NeoPixel.h>


#define PIN1          4// 15//d8


Adafruit_NeoPixel seq1 = Adafruit_NeoPixel(83, PIN1, NEO_GRB + NEO_KHZ800);

unsigned  pulso=0;
int sinal;

int threshold = 550;
void setup() {
  
//#if defined (__AVR_ATtiny85__)
  //if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
//#endif

  seq1.begin();
 

  Serial.begin(9600);
  

}

void loop() {
 sinal=analogRead(pulso);

 Serial.println('1');
 if(sinal>=545&&sinal<=610)
 {
   for (int i = 0; i <= 83; i++ )
    {
        seq1.setPixelColor(i, seq1.Color(0, 255, 0));
     
        seq1.show();
      
    }
 }

else{
    for (int i = 0; i <= 83; i++ )
    {
        seq1.setPixelColor(i, seq1.Color(0, 0, 0));
     
        seq1.show();
     

    }
}

}
