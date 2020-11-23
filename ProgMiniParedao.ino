//Programação Mini paredao
#include <Adafruit_NeoPixel.h>


#define PIN1           16

Adafruit_NeoPixel seq1 = Adafruit_NeoPixel(83, PIN1, NEO_GRB + NEO_KHZ800);



void setup() {
  //iniciando o serial e os leds
  seq1.begin();
  Serial.begin(9600);
}
// animações mini paredão
void animacao1(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9);
void animacao2();
void animacao3(int c1, int c2, int c3, int c4, int c5, int c6);
void animacao4(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int dalay4);
void animacao5(int c1, int c2, int c3, int dalay5);
void animacao6(int c1, int c2, int c3, int dalay6);
void animacao7(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay7);
void animacao8(int c1, int c2, int c3, int dalay8);
void animacao9(int c1, int c2, int c3, int delay9);
void animacao10(int c1, int c2, int c3, int dalay10);
void animacao11(int c1, int c2, int c3, int delay11);
void animacao12(int c1, int c2, int c3, int delay12);
void animacao13(int c1, int c2, int c3, int delay13);
void animacao14(int c1, int c2, int c3, int delay14);
void animacao15(int c1, int c2, int c3, int delay15);
void animacao16();
//apaga os leds
void apagar();
void acender(int c1, int c2, int c3);
//funções que auxiliam as animações
void ColunaGeral(int n, int c1, int c2, int c3, int d);
void Chuva(int n, int co, int c1, int c2, int c3, int d);
void ColunaLados(int n, int c1, int c2, int c3, int d);
void ColunaLadosI(int n, int c1, int c2, int c3, int d);
void Linha(int n, int c1, int c2, int c3);
void espiralCentro(int c1, int c2, int c3, int dalaymeio); //n=0
void espiralPesqI(int c1, int c2, int c3, int dalaymeio); //n=1
void espiralPsupD(int c1, int c2, int c3, int dalaymeio); //n=2
void diagonalCentro(int c1, int c2, int c3, int delaymeio); //n=3
void diagonalCentroOp(int c1, int c2, int c3, int delaymeio); //n=4
void diagonalCentroIn(int c1, int c2, int c3, int delaymeio); //n=5
void diagonalCentroInOp(int c1, int c2, int c3, int delaymeio); //n=6
void curvaMeio1(int c1, int c2, int c3, int delaymeio); //n=7
void curvaMeio2(int c1, int c2, int c3, int delaymeio); //n=8
void curvaMeio3(int c1, int c2, int c3, int delaymeio); //n=9
void curvaMeio4(int c1, int c2, int c3, int delaymeio); //n=10
void curvaMeio5(int c1, int c2, int c3, int delaymeio); //n=11
void colunaMeio6(int n, int c1, int c2, int c3, int delaymeio); //n=12
void meio(int n, int c1, int c2, int c3, int d); //n maximo = 1
void cima(int n, int c1, int c2, int c3, int delaycima); //n maximo = 1
void curvaLados1(int c1, int c2, int c3, int delaylado); //n=0
void curvaLados2(int c1, int c2, int c3, int delaylado); //n=1
void curvaLados3(int c1, int c2, int c3, int delaylado); //n=2
void espiralLados(int c1, int c2, int c3, int delaylado); //n=3
void BatidaLados(int n, int c1, int c2, int c3, int c4, int c5, int c6, int d);//n=4
void chuvaLados(int n, int c1, int c2, int c3, int c4, int c5, int c6, int d);//n=5
void Lados(int n, int c1, int c2, int c3, int c4, int c5, int c6, int delaylado); //n maximo = 5

void loop()
{
//começo enviando 1 para o serial para iniciar o som no processing no mesmo momento dos leds
Serial.println('1');

animacao1(255, 0,0,0,255,0,0,0,255);
 apagar();
 delay(80);
 
 animacao2();
  apagar();
 delay(80);
 
 animacao5(255,255, 0, 100);
  apagar();
 delay(80);
 
 animacao6(4,255, 23, 30);
  apagar();
 delay(80);
 
 animacao7(20,255, 5,255,200,30,0,150,20, 40);
  apagar();
 delay(50);
 
 animacao8(25,255, 10, 50);
  apagar();
 delay(50);
 
 for(int i=0;i<10;i++)
 {
 animacao9(255,35, 10, 50);
 } apagar();
 delay(50);
 
 for(int i=0;i<10;i++)
 {
 animacao10(50,120, 250, 130);
  apagar();
 delay(50);
 }

 animacao12(255,255, 20,00);
  apagar();
 delay(50);
 
  for(int i=0;i<5;i++)
 {
 animacao11(255,90, 30, 90);
  apagar();
 delay(50);
 }

 animacao14(255,5, 30, 100);
  apagar();
 delay(50);
 
}

void animacao1(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9)
{
  int cont(0),delay1(50),delay2(80);
  do
  {
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 4 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));        
        seq1.show();   
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 5 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));    
        seq1.show();      
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 6 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));      
        seq1.show();
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 7 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));        
        seq1.show();       
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 8 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));       
        seq1.show(); 
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 9 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));       
        seq1.show();   
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 10 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9)); 
        seq1.show();
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 11 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));     
        seq1.show();
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    for (int i = 0; i <= 83; i++ )
    {
      if (i % 12 == 0)
      {
        seq1.setPixelColor(i, seq1.Color(c7, c8, c9));
        seq1.show(); 
        delay(delay2);
      }
    }
    apagar();
    delay(delay1);
    
    for (int i = 0; i <= 83; i = i + 2)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(delay2);
    }
    apagar();
    delay(delay1);

    for (int i = 1; i <= 83; i = i + 2)
    {
      seq1.setPixelColor(i, seq1.Color(c4, c5, c6));
      seq1.show();
      delay(delay2);
    }
    apagar();
    delay(delay1);
    cont++;
    delay1=delay1-2;
    delay2=delay2-3;
  }
  while (cont < 3);
}

void animacao2()
{
  int c1(255),c2(255),c3(255),delay2(200),parar(0);
  do
  {
     for (int i = 0; i <= 9; i++)
    {
     ColunaGeral(i, c1, c2, c3,100);
     delay(20);
    
   c1=c1-10;
   
  
   if(c1==0)
   {c2=c2+10;
   } 
   if(c2==255)
   {
    c3=c3+10;
    
   }
   if(c3==255)
   {
    c1=c1+10;
    
   } 
    
    }
    
    parar++;
    }
  while (parar<200);
  
}

void animacao3(int c1, int c2, int c3, int c4, int c5, int c6)
{
  int cont(0),delay3(100);
  do
  {
   for (int i = 0,j = 83; i <= 39; i++&&j--)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.show(); 
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq1.show(); 
      if(i==39)
      {
      seq1.setPixelColor(44, seq1.Color(c4, c5, c6));
      seq1.show(); 
      }
      delay(delay3); 
    }    
    delay3=delay3-5;
    cont++;
  }
  while (cont < 15);
}

void animacao4(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay4)
{
  int cont = 0;
  do
  {   
      seq1.setPixelColor(51, seq1.Color(c4, c5, c6));
      seq1.show(); 
      seq1.setPixelColor(48, seq1.Color(c4, c5, c6));
      seq1.show(); 
      seq1.setPixelColor(32, seq1.Color(c4, c5, c6));
      seq1.show(); 
      seq1.setPixelColor(35, seq1.Color(c4, c5, c6));
      seq1.show(); 
      delay(delay4); 
      apagar();
      seq1.setPixelColor(38, seq1.Color(c1, c2, c3));
      seq1.show(); 
      seq1.setPixelColor(45, seq1.Color(c1, c2, c3));
      seq1.show(); 
      seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
      seq1.show(); 
      seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay4); 
      apagar();
      for(int i=0,j=83;i<30;i++&&j--)
      {
      seq1.setPixelColor(i, seq1.Color(c4, c5, c6));
      seq1.show(); 
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq1.show(); 
      }
      delay(delay4); 
      apagar();
    cont++;
  }
  while (cont <20);

}

void animacao5(int c1, int c2, int c3, int delay5)
{
  int cont = 0, cont2 = 0;
  do
  {
      seq1.setPixelColor(38, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(45, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(33, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(32, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(44, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(51, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(50, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(delay5); 
      seq1.setPixelColor(48, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      seq1.setPixelColor(35, seq1.Color(c1, c2, c3));
      seq1.show(); 
      delay(delay5);
      
      seq1.setPixelColor(30, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(31, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(41, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(40, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(42, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(43, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(53, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(52, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(delay5); 
      cont++;
       for (int i = 0,j = 82; i <= 29; i++&&j--)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
      seq1.show();
    }
    delay(delay5);
    apagar();
  }
  while (cont < 10);
}

void animacao6(int c1, int c2, int c3, int delay6)
{
  int cont = 0;
  do
  {
    for (int i = 9, j = 0; i >= 0; i-- && j++)
    {
      ColunaGeral(i, c1, c2, c3, delay6);
      delay(delay6);
      ColunaGeral(j, c1, c2, c3, delay6);
      delay(delay6);
      ColunaGeral(i, 0, 0, 0, delay6);
      delay(delay6);
      ColunaGeral(j, 0, 0, 0, delay6);
      delay(delay6);
    }
    cont++;
  }
  while (cont < 10);
}
void animacao7(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay7)
{
  int cont = 0;
  do {
    for (int i = 29, j = 52; i <=40; i++ && j--)
    {

      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(500);

    }
    apagar();
    cont++;
  }
  while (cont < 3);
  cont = 0;
  delay(20);

  do {
    for (int i = 0, j = 9; i < 3; i++ && j--)
    {
      ColunaGeral(i, c4, c5, c6, delay7);
      delay(delay7);
      ColunaGeral(j, c4, c5, c6, delay7);
      delay(delay7);
      ColunaGeral(i, 0, 0, 0, delay7);
      delay(delay7);
      ColunaGeral(j, 0, 0, 0, delay7);
      delay(delay7);
      if (i == 2)
      {
        ColunaGeral(7, c4, c5, c6, delay7);
        delay(delay7);
        ColunaGeral(7, 0, 0, 0, delay7);
        delay(delay7);
      }
    }

    apagar();
    cont++;
  }
  while (cont < 30);
 
}
void animacao8(int c1, int c2,int c3, int delay8)
{
    int cont = 0;
    do
    {
        for (int i = 0; i < 29; i++)
        {
            int k=random(0,28);
            seq1.setPixelColor(k, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(delay8);
        }
        delay(2);
        apagar();
        delay(delay8);
        cont++;
    }
    while (cont < 3);
    cont = 0;
    do
    {
        seq1.setPixelColor(29, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(30, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(40, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(42, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(41, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(52, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(51, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        cont++;
    }
    while (cont < 5);
    cont = 0;
    do
    {
        for (int i = 53; i < 82; i++)
        {
            int k=random(54,83);
            seq1.setPixelColor(k, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(delay8);
        }
delay(2);
        apagar();
        delay(delay8);
        cont++;

    }
    while (cont < 3);

}

void animacao9(int c1, int c2,int c3, int delay9)
{
    for (int i = 0; i <= 6; i++)
    {
        meio(3,c1,c2,c3,delay9);
        delay(delay9);
    }
    apagar();
    delay(delay9);
    seq1.setPixelColor(30, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(31, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(53, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(52, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delay9);
    apagar();
    delay(delay9);
    seq1.setPixelColor(40, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(41, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(42, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(43, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delay9);
    apagar();
    delay(delay9);

    for (int i = 0; i <= 29; i++)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
    delay(delay9);
    for (int i = 54; i <= 83; i++)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
    delay(delay9);
}
void animacao10(int c1, int c2,int c3, int delay10)
{
    for (int i = 0; i <= 7; i++)
    {
        Linha(i,c1,c2,c3,delay10);
        delay(delay10);
    }
}
void animacao11(int c1, int c2,int c3, int delay11)
{
    int cont = 0;
    do
    {
        for (int i = 1, j = 7; i < 9; i++ && j--)
        {
            Linha(j,c1,c2,c3,delay11);
            ColunaGeral(i,c1,c2,c3,delay11);
           delay(delay11);
        } 
        cont++;
    }
    while (cont < 5);
}
void animacao12(int c1, int c2,int c3, int delay12)
{
    for (int i = 0; i <= 5; i++)
    {
        ColunaLados(i,c1,c2,c3,delay12);
        delay(delay12);        
    }
    for (int i = 0; i <= 5; i++)
    {
        ColunaLados(i,0,0,0,delay12);
        delay(delay12);
    }
}
void animacao13(int c1, int c2,int c3, int delay13)
{
    for (int i = 0, j = 5; i <= 2; i++ && j--)
    {
        ColunaLados(i,c1,c2,c3,delay13);
         ColunaLadosI(i,c1,c2,c3,delay13);
        ColunaLados(j,c1,c2,c3,delay13);
        ColunaLadosI(j,c1,c2,c3,delay13);
    }
}
void animacao14(int c1, int c2,int c3, int delay14)
{
    for (int i = 0 ; i <= 3; i++)
    {
        meio(0,c1,c2,c3,delay14);
        delay(delay14);
    }
}
void animacao15(int c1,int c2, int c3, int delay15)
{
    ColunaLados(0,c1,c2,c3,delay15);
    ColunaLadosI(1,c1,c2,c3,delay15);
    ColunaLados(2,c1,c2,c3,delay15); 
    ColunaLados(3,c1,c2,c3,delay15);
    
    ColunaLadosI(4,c1,c2,c3,delay15);
    
    ColunaLados(5,c1,c2,c3,delay15);
    
}
void animacao16()
{
  int c1(255),c2(255),c3(255),delay2(150),parar(0);
  do
  { 
     for (int i = 0; i <= 9; i++)
    {
     ColunaGeral(i, c1, c2, c3,10);
    }delay(10);
    
   c1=c1-10;
   c2=c2-20;
  
   if(c1==0)
   {c2=c2+10;
   } 
   if(c2==255)
   {
    c3=c3+10;
    
   }
   if(c3==255)
   {
    c1=c1+10;
    
   } 
    
    
    
    parar++;
    }
  while (parar<100);
  
}
void ColunaGeral(int n, int c1, int c2, int c3, int d)
{
  if (n == 0)
  {
    for (int i = 74; i <= 81; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 1)
  {
     for (int i = 61; i < 74; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 2)
  {
     for (int i = 53; i < 61; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 3)
  {
    for (int i = 47; i < 51; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 4)
  {
     for (int i = 43; i <47; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 5)
  {
     for (int i = 35; i < 39; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();;
  }
  if (n == 6)
  {
    for (int i = 31; i <= 34; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 7)
  {
    for (int i = 21; i < 29; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 8)
  {
    for (int i = 8; i < 21; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 9)
  {
    for (int i = 0; i <= 7; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
}
void apagar()
{
  for (int i = 0; i < 84; i++)
  {
    seq1.setPixelColor(i, seq1.Color(0, 0, 0));
    
  }
  seq1.show();
 
}
void ColunaLados(int n, int c1, int c2, int c3, int d)
{
    if (n == 0)
    {
        for (int i = 76; i < 83; i++)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 1)
    {
        for (int i = 75; i > 62; i--)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 2)
    {
        for (int i = 53; i <=61; i++)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }

    if (n == 3)
    {
        for (int i = 28; i >= 22; i--)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 4)
    {
        for (int i = 8; i <= 21; i++)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 5)
    {
        for (int i = 7; i >= 0; i--)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
}
void ColunaLadosI(int n, int c1, int c2, int c3, int d)
{
    if (n == 0)
    {
        for (int i = 82; i >76; i--)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 1)
    {
        for (int i = 62; i <=75 ; i++)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 2)
    {
        for (int i = 61; i >=54; i--)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }

    if (n == 3)
    {
        for (int i = 22; i < 29; i++)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 4)
    {
        for (int i = 21; i >=8; i--)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 5)
    {
        for (int i = 0; i <=7; i++)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
}
void Linha(int n,int c1,int c2, int c3, int d)
{
    if (n == 0)
    {
        seq1.setPixelColor(83, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(63, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(62, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(61, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(48, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(35, seq1.Color(c1,c2, c3));
        seq1.setPixelColor(22, seq1.Color(c1, c2,c3));
        seq1.setPixelColor(21, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(20, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(0, seq1.Color(c1, c2, c3));

        seq1.show();
    }
    if (n == 1)
    {
        seq1.setPixelColor(82, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(65, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(64, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(60, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(49, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(23,seq1.Color(c1, c2, c3));
        seq1.setPixelColor(19, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(18, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(1, seq1.Color(c1, c2, c3));

        seq1.show();
    }
    if (n == 2)
    {
        seq1.setPixelColor(81, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(67, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(66, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(59, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(50, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(45, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(38, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(33, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(24, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(17, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(16, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(2, seq1.Color(c1, c2, c3));

        seq1.show();
    }
    if (n == 3)
    {
        seq1.setPixelColor(80, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(69, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(68, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(58, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(51, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(44, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(32, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(25, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(15, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(14, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(3, seq1.Color(c1, c2, c3));

        seq1.show();
    }
    if (n == 4)
    {
        seq1.setPixelColor(79, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(71, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(70, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(57, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(52, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(43, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(40, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(31, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(26, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(13, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(12, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(4, seq1.Color(c1, c2, c3));

        seq1.show();
    }
    if (n == 5)
    {
        seq1.setPixelColor(78, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(73, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(72, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(56, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(53, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(42, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(41, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(30, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(27, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(11, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(10, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(5, seq1.Color(c1, c2, c3));

        seq1.show();
    }
    if (n == 6)
    {
        seq1.setPixelColor(77, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(75, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(74, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(55, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(28, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(9, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(8, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(6, seq1.Color(c1, c2, c3));

        seq1.show();
    }
    if (n == 7)
    {
        seq1.setPixelColor(76, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(54, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(29, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(7, seq1.Color(c1, c2, c3));

        seq1.show();
    }
}
void espiralCentro(int c1,int c2, int c3, int delaymeio )
{
    seq1.setPixelColor(38, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(45, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(33, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(32, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(44, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(51, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(50, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(49, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(48, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(35, seq1.Color(c1, c2, c3));
    seq1.show();
}
void espiralPesqI(int c1,int c2, int c3, int delaymeio)
{
    seq1.setPixelColor(35, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(48, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(49, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(50, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(51, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(44, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(32, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(33, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(45, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(38, seq1.Color(c1, c2, c3));
    seq1.show();
}
void espiralPsupD(int c1,int c2, int c3, int delaymeio)
{
    seq1.setPixelColor(35, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(48, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(49, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(50, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(51, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(44, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(32, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(33, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(45, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(38, seq1.Color(c1, c2, c3));
    seq1.show();
}
void diagonalCentro(int c1,int c2, int c3, int delaymeio)
{

    seq1.setPixelColor(51, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(44, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(50, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(39, seq1.Color(c1, c2,c3));
    seq1.setPixelColor(45, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(49, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(32, seq1.Color(c1,c2, c3));
    seq1.setPixelColor(38, seq1.Color(c1,c2, c3));
    seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(48, seq1.Color(c1, c2,c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(33, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(37, seq1.Color(c1, c2,c3));
    seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(35, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);

}
void diagonalCentroOp(int c1,int c2, int c3, int delaymeio)
{
    seq1.setPixelColor(35, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(33, seq1.Color(c1, c2,c3));
    seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(32, seq1.Color(c1,c2, c3));
    seq1.setPixelColor(38, seq1.Color(c1,c2, c3));
    seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(48, seq1.Color(c1, c2,c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(45, seq1.Color(c1, c2,c3));
    seq1.setPixelColor(49, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(44, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(50, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(51, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
}
void diagonalCentroIn(int c1,int c2, int c3, int delaymeio)
{
    seq1.setPixelColor(32, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(33, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(44, seq1.Color(c1, c2,c3));
    seq1.setPixelColor(38, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(51, seq1.Color(c1,c2, c3));
    seq1.setPixelColor(45, seq1.Color(c1,c2, c3));
    seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(35, seq1.Color(c1, c2,c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(50, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(46, seq1.Color(c1, c2,c3));
    seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(49, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(48, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
}
void diagonalCentroInOp(int c1,int c2, int c3, int delaymeio)
{
    seq1.setPixelColor(48, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(47, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(49, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(50, seq1.Color(c1, c2,c3));
    seq1.setPixelColor(46, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(36, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(51, seq1.Color(c1,c2, c3));
    seq1.setPixelColor(45, seq1.Color(c1,c2, c3));
    seq1.setPixelColor(37, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(35, seq1.Color(c1, c2,c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(44, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(38, seq1.Color(c1, c2,c3));
    seq1.setPixelColor(34, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(33, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(39, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
    seq1.setPixelColor(32, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaymeio);
}
void curvaMeio1(int c1,int c2, int c3, int delaymeio)
{
    for (int i = 39, j = 44; i >= 32; i-- && j++)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaymeio);
    }
}
void curvaMeio2(int c1,int c2, int c3, int delaymeio)
{
    for (int i = 32, j = 51; i < 40; i++ && j--)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaymeio);
    }
}
void curvaMeio3(int c1,int c2, int c3, int delaymeio)
{
    for (int i = 32; i < 40; i++)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));       
        seq1.show();
        delay(delaymeio);
    }
    for (int j = 44; j < 52; j++)
    {
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaymeio);
    }
}
void curvaMeio4(int c1,int c2, int c3, int delaymeio)
{
    for (int i = 51; i > 43; i--)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaymeio);
    }

    for (int i = 39; i > 31; i--)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaymeio);
    }
}
void curvaMeio5(int c1,int c2, int c3, int delaymeio)
{
    int cont = 3;
    for (int i = 35, j = 47; i < 39; i++ && j++)
    {
        cont ++;
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        if(i<=38)
        {
            seq1.setPixelColor(i-cont, seq1.Color(c1, c2, c3));
            seq1.setPixelColor(j-cont, seq1.Color(c1, c2, c3));
        }
        seq1.show();
        delay(delaymeio);
    }
}
void meio(int i, int c1,int c2, int c3, int delaymeio)
{

    //for(int i=0; i<n; i++)
    //{
        if(i==0)
        {
            espiralCentro(c1,c2,c3,delaymeio );
        }
        if(i==1)
        {
            espiralPesqI(c1,c2,c3,delaymeio );
        }
        if(i==2)
        {
            espiralPsupD(c1,c2,c3,delaymeio );
        }
        if(i==3)
        {
            diagonalCentro(c1,c2,c3,delaymeio );
        }
        if(i==4)
        {
            diagonalCentroOp(c1,c2,c3,delaymeio );
        }
        if(i==5)
        {
            diagonalCentroIn(c1,c2,c3,delaymeio );
        }
        if(i==6)
        {
            diagonalCentroInOp(c1,c2,c3,delaymeio );
        }
        if(i==7)
        {
            curvaMeio1(c1,c2,c3,delaymeio );
        }
        if(i==8)
        {
            curvaMeio2(c1,c2,c3,delaymeio );
        }
        if(i==9)
        {
            curvaMeio3(c1,c2,c3,delaymeio );
        }
        if(i==10)
        {
            curvaMeio4(c1,c2,c3,delaymeio );
        }
        if(i==11)
        {
            curvaMeio5(c1,c2,c3,delaymeio );
        }
    //}

}
void cima(int n, int c1,int c2, int c3, int delaycima)
{
    if(n==0)
    {
        seq1.setPixelColor(30, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(41, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(42, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(53, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(31, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(40, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(43, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(52, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
    }
    if(n==1)
    {
        seq1.setPixelColor(30, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(31, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(41, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(40, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(42, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(43, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(53, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
        seq1.setPixelColor(52, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaycima);
    }


}
void curvaLados1(int c1,int c2, int c3, int delaylado)
{
    for (int i = 0, j = 83; i < 30; i++ && j--)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaylado);
    }
}
void curvaLados2(int c1,int c2, int c3, int delaylado)
{
    for (int i = 0, j = 61; i < 30; i++ && j++)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaylado);
    }
}
void curvaLados3(int c1,int c2, int c3, int delaylado)
{
    for (int i = 29, j = 61; i >=0; i-- && j++)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaylado);
    }
}
void espiralLados(int c1,int c2, int c3, int delaylado)
{
    for(int i=0,j=61; i<=7; i++&&j--)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaylado);
    }
    seq1.setPixelColor(8, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(9, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(75, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(74, seq1.Color(c1, c2, c3));
    seq1.show();
    delay(delaylado);
    for(int i=29,j=76; i>=22; i-- && j++)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaylado);
    }
    for(int i=21,j=62; i>9; i--&&j++)
    {
        seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
        seq1.setPixelColor(j, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delaylado);
    }
}
void Lados(int n, int c1,int c2, int c3, int delaylado)
{
    if(n==0)
    {
        curvaLados1(c1,c2,c3,delaylado);
    }
    if(n==1)
    {
        curvaLados1(c1,c2,c3,delaylado);
    }
    if(n==2)
    {
        curvaLados1(c1,c2,c3,delaylado);
    }
    if(n==3)
    {
        espiralLados(c1,c2,c3,delaylado);
    }
}
