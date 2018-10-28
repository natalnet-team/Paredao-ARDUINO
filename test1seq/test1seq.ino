//Apresentacao cientec 2018
#include <Adafruit_NeoPixel.h>


#define PIN1           10

Adafruit_NeoPixel seq1 = Adafruit_NeoPixel(83, PIN1, NEO_GRB + NEO_KHZ800);



void setup() {
  seq1.begin();
  Serial.begin(9600);
}

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
/*void animacao16(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay16);
void animacao17(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay17);
void animacao18(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay18);
void animacao19(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay19);
void animacao20(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay20);
void animacao21(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay21);
void animacao22(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay22);
void animacao23(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay23);
void animacao24(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay24);
void animacao25(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay25);
void animacao26(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay26);
void animacao27(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay27);
void animacao28(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay28);
void animacao29(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay29);
void animacao30(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay30);
void animacao31(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay31 );
void animacao32(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay32 );
void animacao33(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay33 );
void animacao34(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay34 );
*/
void apagar();
void acender(int c1, int c2, int c3);
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
Serial.println('1');
 animacao1(255, 0,0,0,255,0,0,0,255);
 apagar();
 delay(50);
 animacao2();
  apagar();
 delay(50);
  //animacao3(200, 100,2,0, 20,100);
 animacao4(255, 250, 10, 50, 10,255, 30,2,70,200);
  apagar();
 delay(50);
 animacao5(255,255, 0, 100);
  apagar();
 delay(50);
 animacao6(0,255, 0, 30);
  apagar();
 delay(50);
 animacao7(20,255, 0,255,200,0,0,100,20, 40);
  apagar();
 delay(50);
 animacao8(25,25, 0, 50);
  apagar();
 delay(50);
 for(int i=0;i<10;i++)
 {
 animacao9(25,5, 10, 50);
 } apagar();
 delay(50);
 for(int i=0;i<10;i++)
 {
 animacao10(25,55, 0, 50);
 } apagar();
 delay(50);
  for(int i=0;i<10;i++)
 {
 animacao11(255,25, 5, 50);
  apagar();
 delay(50);
 }
 animacao12(255,255, 20,00);
  apagar();
 delay(50);
 animacao13(255,25, 200, 100);
  apagar();
 delay(50);
 animacao14(255,5, 30, 100);
  apagar();
 delay(50);
 animacao15(255,55, 2, 100);
 apagar();
 delay(50);
 animacao16();
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
       for (int i = 0,j = 83; i <= 29; i++&&j--)
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
    for (int i = 30, j = 53; i < 40; i++ && j--)
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
        for (int i = 0; i < 30; i++)
        {
            int k=random(0,29);
            seq1.setPixelColor(k, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(delay8);
        }
        apagar();
        delay(delay8);
        cont++;
    }
    while (cont < 3);
    cont = 0;
    do
    {
        seq1.setPixelColor(30, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(31, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(41, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(40, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(42, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(43, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(53, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        seq1.setPixelColor(52, seq1.Color(c1, c2, c3));
        seq1.show();
        delay(delay8);
        cont++;
    }
    while (cont < 5);
    cont = 0;
    do
    {
        for (int i = 54; i < 84; i++)
        {
            int k=random(54,83);
            seq1.setPixelColor(k, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(delay8);
        }

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
    while (cont < 10);
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
    for (int i = 75; i <= 83; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 1)
  {
     for (int i = 62; i <= 74; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 2)
  {
     for (int i = 54; i <= 61; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 3)
  {
    for (int i = 48; i <= 51; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 4)
  {
     for (int i = 44; i <= 47; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 5)
  {
     for (int i = 36; i <= 39; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();;
  }
  if (n == 6)
  {
    for (int i = 32; i <= 35; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 7)
  {
    for (int i = 22; i <= 29; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    }
    seq1.show();
  }
  if (n == 8)
  {
    for (int i = 8; i <= 21; i++)
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
        for (int i = 76; i <= 83; i++)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 1)
    {
        for (int i = 75; i >= 62; i--)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }
    if (n == 2)
    {
        for (int i = 54; i <= 61; i++)
        {
            seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
            seq1.show();
            delay(d);
        }

    }

    if (n == 3)
    {
        for (int i = 29; i >= 22; i--)
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
        for (int i = 83; i >=76; i--)
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
        for (int i = 22; i <= 29; i++)
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
/*
void animacao7(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int c10, int c11, int c12, int delay7)
{
  int cont = 0;
  do {
    for (int i = 0; i <= 6; i++)
    {
      meio(3, c1, c2, c3, delay7);
      delay(delay7);
    }
    apagar();
    delay(delay7);
    seq2.setPixelColor(0, seq2.Color(c4, c5, c6));
    seq2.setPixelColor(1, seq2.Color(c4, c5, c6));
    seq3.setPixelColor(11, seq3.Color(c4, c5, c6));
    seq3.setPixelColor(10, seq3.Color(c4, c5, c6));
    seq2.show();
    seq3.show();
    delay(delay7);
    apagar();
    delay(delay7);
    seq2.setPixelColor(11, seq2.Color(c7, c8, c9));
    seq2.setPixelColor(10, seq2.Color(c7, c8, c9));
    seq3.setPixelColor(0, seq2.Color(c7, c8, c9));
    seq3.setPixelColor(1, seq2.Color(c7, c8, c9));
    seq2.show();
    seq3.show();
    delay(delay7);
    apagar();
    delay(delay7);

    for (int i = 0; i <= 29; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c10, c11, c12));
      seq4.setPixelColor(i, seq4.Color(c10, c11, c12));
    }
    seq1.show();
    seq4.show();
    delay(delay7);
    cont++;
  }
  while (cont < 5);
}
void animacao8(int c1, int c2, int c3, int delay8)
{
  int cont = 0;
  do {
    for (int i = 0; i <= 7; i++)
    {
      Linha(i, c1, c2, c3);
      delay(delay8);
      apagar();
    }
    cont++;
  }
  while (cont < 13);
}
void animacao9(int c1, int c2, int c3, int c4, int c5, int c6, int delay9)
{
  int cont = 0;
  do
  {
    for (int i = 1, j = 7; i < 9; i++ && j--)
    {
      Linha(j, c1, c2, c3);
      ColunaGeral(i, c4, c5, c6, delay9);
      delay(delay9);
      Linha(j, 0, 0, 0);
      ColunaGeral(i, 0, 0, 0, delay9);
    }
    cont++;
  }
  while (cont < 13);
}
void animacao10(int c1, int c2, int c3, int delay10)
{
  Chuva(0, 22, c1, c2, c3, delay10);
}
void animacao11(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay11)
{
  int cont = 0;
  do {
    for (int i = 0, j = 21; i < 3; i++ && j--)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq1.setPixelColor(j + 3, seq1.Color(c4, c5, c6));
      seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
      seq3.setPixelColor(i, seq3.Color(c7, c8, c9));
      seq4.setPixelColor(i, seq4.Color(c4, c5, c6));
      seq4.setPixelColor(j, seq4.Color(c7, c8, c9));
      seq4.setPixelColor(j + 3, seq4.Color(c7, c8, c9));
    }
    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
    delay(delay11);
    for (int i = 5, j = 29; i < 8; i++ && j--)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq1.setPixelColor(i + 5, seq1.Color(c1, c2, c3));
      seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
      seq3.setPixelColor(i, seq3.Color(c7, c8, c9));
      seq4.setPixelColor(i, seq4.Color(c4, c5, c6));
      seq4.setPixelColor(i + 9, seq4.Color(c4, c5, c6));
      seq4.setPixelColor(j, seq4.Color(c7, c8, c9));

    }
    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
    delay(delay11);
    for (int i = 3, j = 23; i < 5; i++ && j--)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq1.setPixelColor(j - 5, seq1.Color(c4, c5, c6));
      seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
      seq3.setPixelColor(i, seq3.Color(c7, c8, c9));
      seq4.setPixelColor(i, seq4.Color(c4, c5, c6));
      seq4.setPixelColor(j, seq4.Color(c7, c8, c9));
      seq4.setPixelColor(j - 10, seq4.Color(c7, c8, c9));
    }
    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
    delay(delay11);
    for (int i = 8, j = 14; i < 10; i++ && j--)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
      seq3.setPixelColor(i, seq3.Color(c7, c8, c9));
      seq4.setPixelColor(i, seq4.Color(c4, c5, c6));
      seq4.setPixelColor(j + 4, seq4.Color(c7, c8, c9));
    }
    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
    delay(delay11);
    for (int i = 15; i < 17; i++ )
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq2.setPixelColor(i - 5, seq2.Color(c1, c2, c3));
      seq3.setPixelColor(i - 5, seq3.Color(c7, c8, c9));
      seq4.setPixelColor(i - 5, seq4.Color(c4, c5, c6));
    }
    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
    delay(delay11);
    cont++;
  }
  while (cont < 10);
}
void animacao12(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay12)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay12);
    meio(0, c4, c5, c6, delay12);
    Lados(0, c7, c8, c9, c7, c8, c9, delay12);
    apagar();
  }
}
void animacao13(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay13)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay13);
    meio(1, c4, c5, c6, delay13);
    Lados(1, c7, c8, c9, c7, c8, c9, delay13);
    apagar();
  }
}
void animacao14(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay14)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay14);
    meio(2, c4, c5, c6, delay14);
    Lados(2, c7, c8, c9, c7, c8, c9, delay14);
    apagar();
  }
}
void animacao15(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay15)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay15);
    meio(3, c4, c5, c6, delay15);
    Lados(3, c7, c8, c9, c7, c8, c9, delay15);
    apagar();
  }
}
void animacao16(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay16)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay16);
    meio(4, c4, c5, c6, delay16);
    Lados(4, c7, c8, c9, c7, c8, c9, delay16);
    apagar();
  }
}
void animacao17(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay17)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay17);
    meio(5, c4, c5, c6, delay17);
    Lados(5, c7, c8, c9, c7, c8, c9, delay17);
    apagar();
  }
}
void animacao18(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay18)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay18);
    meio(6, c4, c5, c6, delay18);
    Lados(0, c7, c8, c9, c7, c8, c9, delay18);
    apagar();
  }
}
void animacao19(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay19)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay19);
    meio(7, c4, c5, c6, delay19);
    Lados(1, c7, c8, c9, c7, c8, c9, delay19);
    apagar();
  }
}
void animacao20(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay20)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay20);
    meio(8, c4, c5, c6, delay20);
    Lados(2, c7, c8, c9, c7, c8, c9, delay20);
    apagar();
  }
}
void animacao21(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay21)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay21);
    meio(9, c4, c5, c6, delay21);
    Lados(3, c7, c8, c9, c7, c8, c9, delay21);
    apagar();
  }
}
void animacao22(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay22)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay22);
    meio(10, c4, c5, c6, delay22);
    Lados(4, c7, c8, c9, c7, c8, c9, delay22);
    apagar();
  }
}
void animacao23(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay23)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay23);
    meio(11, c4, c5, c6, delay23);
    Lados(5, c7, c8, c9, c7, c8, c9, delay23);
    apagar();
  }
}
void animacao24(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay24)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay24);
    meio(12, c4, c5, c6, delay24);
    Lados(1, c7, c8, c9, c7, c8, c9, delay24);
    apagar();
  }
}
void animacao25(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay25)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay25);
    meio(0, c4, c5, c6, delay25);
    Lados(2, c7, c8, c9, c7, c8, c9, delay25);
    apagar();
  }
}
void animacao26(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay26)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay26);
    meio(12, c4, c5, c6, delay26);
    Lados(3, c7, c8, c9, c7, c8, c9, delay26);
    apagar();
  }
}
void animacao27(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay27)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay27);
    meio(11, c4, c5, c6, delay27);
    Lados(4, c7, c8, c9, c7, c8, c9, delay27);
    apagar();
  }
}
void animacao28(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay28)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay28);
    meio(10, c4, c5, c6, delay28);
    Lados(5, c7, c8, c9, c7, c8, c9, delay28);
    apagar();
  }
}
void animacao29(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay29)
{
  for (int i = 0; i < 10; i++) {
    cima(0, c1, c2, c3, delay29);
    meio(9, c4, c5, c6, delay29);
    Lados(0, c7, c8, c9, c7, c8, c9, delay29);
    apagar();
  }
}
void animacao30(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay30)
{
  for (int i = 0; i < 10; i++) {
    cima(1, c1, c2, c3, delay30);
    meio(8, c4, c5, c6, delay30);
    Lados(5, c7, c8, c9, c7, c8, c9, delay30);
    apagar();
  }
}
void animacao31(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay31)
{
  int cont = 0;
  do {
    for (int i = 30, j = 53; i < 40; i++ && j--)
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
      ColunaGeral(i, c4, c5, c6, delay31);
      delay(delay31);
      ColunaGeral(j, c4, c5, c6, delay31);
      delay(delay31);
      ColunaGeral(i, 0, 0, 0, delay31);
      delay(delay31);
      ColunaGeral(j, 0, 0, 0, delay31);
      delay(delay31);
      if (i == 2)
      {
        ColunaGeral(7, c4, c5, c6, delay31);
        delay(delay31);
        ColunaGeral(7, 0, 0, 0, delay31);
        delay(delay31);
      }
    }


    cont++;
  }
  while (cont < 30);
  acender(c7, c8, c9);
  delay(500);
  apagar();
}
void animacao32(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay32 )
{
  for (int i = 0, j = 9; i <= 5; i++ && j--)
  {
    ColunaGeral(i, c1, c2, c3, delay32);
    delay(delay32);
    ColunaGeral(j, c4, c5, c6, delay32);
    delay(delay32);
  }
  for (int i = 0, j = 9; i <= 5; i++ && j--)
  {
    ColunaGeral(i, c4, c5, c6, delay32);
    delay(delay32);
    ColunaGeral(j, c1, c2, c3, delay32);
    delay(delay32);
  }
  for (int i = 0, j = 9; i <= 5; i++ && j--)
  {
    ColunaGeral(i, c1, c2, c3, delay32);
    delay(delay32);
    ColunaGeral(j, c7, c8, c9, delay32);
    delay(delay32);
  }
  for (int i = 0, j = 9; i <= 5; i++ && j--)
  {
    ColunaGeral(i, c7, c8, c9, delay32);
    delay(delay32);
    ColunaGeral(j, c1, c2, c3, delay32);
    delay(delay32);
  }
  acender(c1, c2, c3);
  delay(500);
  acender(c4, c5, c6);
  delay(500);
  acender(c7, c8, c9);
  delay(500);
  apagar();
}
void animacao33(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay33 )
{
  int l1 = 0, l2 = 20, l3 = 21, l4 = 22, l5 = 5, l6 = 6, l7 = 5, l8 = 6, l9 = 7, l10 = 8, l11 = 9, l12 = 29, cont = 0, j, k;
  for (int i = 0; i < 9; i++ )
  {
    cont++;
    l1++;
    l2 = l2 - 2;
    l3 = l3 - 2;
    l4++;
    l5--;
    l6++;
    l7--;
    l8++;
    l9--;
    l10 = l10 + 2;
    l11 = l11 + 2;
    l12--;
    seq1.setPixelColor(l1, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(l12, seq4.Color(c4, c5, c6));
    seq1.show();
    seq4.show();
    delay(delay33);
    apagar();
    for (j = 0; j <= 6; j++) {
      seq1.setPixelColor(l2, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(l3, seq1.Color(c1, c2, c3));
      seq4.setPixelColor(l11, seq4.Color(c4, c5, c6));
      seq4.setPixelColor(l10, seq4.Color(c4, c5, c6));
      seq1.show();
      seq4.show();
      delay(delay33);
      apagar();
      break;
    }
    seq1.setPixelColor(l4, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(l9, seq4.Color(c4, c5, c6));
    seq1.show();
    seq4.show();
    delay(delay33);
    apagar();
    for (k = 0; k <= 6; k++) {
      seq2.setPixelColor(l5, seq2.Color(c1, c2, c3));
      seq3.setPixelColor(l8, seq3.Color(c4, c5, c6));
      seq2.show();
      seq3.show();
      delay(delay33);
      apagar();
      seq2.setPixelColor(l6, seq2.Color(c1, c2, c3));
      seq3.setPixelColor(l7, seq3.Color(c4, c5, c6));
      seq2.show();
      seq3.show();
      delay(delay33);
      apagar();
      break;
    }
    Linha(i, c7, c8, c9);
  }
}
void animacao34(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int delay34 )
{
  int cont = 0;


  for (int i = 2; i < 10; i++)
  {

    seq3.setPixelColor(i, seq3.Color(c1, c2, c3));
    seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    seq2.show();
    seq3.show();
  }
  delay(5000);
  apagar();
  for(int i=0;i<60;i++){
    seq2.setPixelColor(2, seq2.Color(c4, c5, c6));
    seq2.setPixelColor(5, seq2.Color(c4, c5, c6));
    seq3.setPixelColor(6, seq3.Color(c4, c5, c6));
    seq3.setPixelColor(9, seq3.Color(c4, c5, c6));
    seq2.show();
    seq3.show();
    delay(60);
    seq2.setPixelColor(2, seq2.Color(0, 0, 0));
    seq2.setPixelColor(5, seq2.Color(0, 0, 0));
    seq3.setPixelColor(6, seq3.Color(0, 0, 0));
    seq3.setPixelColor(9, seq3.Color(0, 0, 0));
    seq2.show();
    seq3.show();
    delay(60);
    
  }
  for(int i=0;i<10;i++){
    seq2.setPixelColor(8, seq2.Color(c7, c8, c9));
    seq2.setPixelColor(7, seq2.Color(c7, c8, c9));
    seq3.setPixelColor(3, seq3.Color(c7, c8, c9));
    seq3.setPixelColor(4, seq3.Color(c7, c8, c9));
    seq2.show();
    seq3.show();
    delay(150);
    apagar();
    delay(150);
  }
  do {
    for (int i = 2, j = 7; i >= 0; i-- && j++)
    {
      ColunaGeral(i, c4, c5, c6, delay34);
      delay(delay34);
      ColunaGeral(j, c4, c5, c6, delay34);
      delay(delay34);
      ColunaGeral(i, 0, 0, 0, delay34);
      delay(delay34);
      ColunaGeral(j, 0, 0, 0, delay34);
      delay(delay34);
      if (i == 2)
      {
        ColunaGeral(7, c4, c5, c6, delay34);
        delay(delay34);
        ColunaGeral(7, 0, 0, 0, delay34);
        delay(delay34);
      }
    }

    cont++;
  }
  while (cont < 30);

}

void acender(int c1, int c2, int c3)
{
  for (int i = 0; i < 30; i++)
  {
    seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
  }
  for (int i = 0; i < 12; i++)
  {
    seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    seq3.setPixelColor(i, seq3.Color(c1, c2, c3));
  }
  seq1.show();
  seq2.show();
  seq3.show();
  seq4.show();
}

void Chuva(int n, int co, int c1, int c2, int c3, int d)
{
  if (n == 0)
  {
    for (int i = co; i <= 29; i++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
      if (i == 25)
      {
        Chuva(1, 8, c1, c2, c3, d);
      }
    }
    Chuva(1, 16, c1, c2, c3, d);
  }
  if (n == 1)
  {
    for (int i = co; i <= 21; i++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
      if (i == 15)
      {
        Chuva(2, 0, c1, c2, c3, d);
      }
      Chuva(2, 4, c1, c2, c3, d);
    }
  }
  if (n == 2)
  {
    for (int i = co; i <= 7; i++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
      if (i == 3)
      {
        Chuva(0, 26, c1, c2, c3, d);
      }
    }
    Chuva(3, 6, c1, c2, c3, d);
  }
  if (n == 3)
  {
    for (int i = co; i <= 9; i++)
    {
      seq3.setPixelColor(i, seq3.Color(c1, c2, c3));
      seq3.show();
      delay(d);
    }
    Chuva(4, 2, c1, c2, c3, d);
  }
  if (n == 4)
  {
    for (int i = co; i <= 5; i++)
    {
      seq3.setPixelColor(i, seq3.Color(c1, c2, c3));
      seq3.show();
      delay(d);
    }
    Chuva(5, 6, c1, c2, c3, d);
  }
  if (n == 5)
  {
    for (int i = co; i <= 9; i++)
    {
      seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
      seq2.show();
      delay(d);
    }
    Chuva(6, 2, c1, c2, c3, d);
  }
  if (n == 6)
  {
    for (int i = co; i <= 5; i++)
    {
      seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
      seq2.show();
      delay(d);
    }
    Chuva(7, 22, c1, c2, c3, d);
  }
  if (n == 7)
  {
    for (int i = co; i <= 29; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(d);
      if (i == 25)
      {
        Chuva(8, 8, c1, c2, c3, d);
      }
    }
    Chuva(8, 16, c1, c2, c3, d);
  }
  if (n == 8)
  {
    for (int i = co; i <= 21; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(d);
      if (i == 15)
      {
        Chuva(9, 0, c1, c2, c3, d);
      }
    }
    Chuva(9, 4, c1, c2, c3, d);
  }
  if (n == 9)
  {
    for (int i = co; i <= 7; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(d);
      if (i == 3)
      {
        Chuva(7, 26, 0, 0, 255, 50);
      }
    }
  }
}
void ColunaLados(int n, int c1, int c2, int c3, int d)
{
  if (n == 0)
  {
    for (int i = 22; i <= 29; i++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
    }

  }
  if (n == 1)
  {
    for (int i = 21; i >= 8; i--)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
    }

  }
  if (n == 2)
  {
    for (int i = 0; i <= 7; i++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
    }

  }
  if (n == 3)
  {
    for (int i = 29; i >= 22; i--)
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
    for (int i = 29; i >= 22; i--)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
    }
  }
  if (n == 1)
  {
    for (int i = 8; i <= 21 ; i++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
    }
  }
  if (n == 2)
  {
    for (int i = 7; i >= 0; i--)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.show();
      delay(d);
    }
  }
  if (n == 3)
  {
    for (int i = 22; i <= 29; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(d);
    }
  }
  if (n == 4)
  {
    for (int i = 21; i >= 8; i--)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(d);
    }
  }
  if (n == 5)
  {
    for (int i = 0; i <= 7; i++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.show();
      delay(d);
    }
  }
}
void Linha(int n, int c1, int c2, int c3)
{
  if (n == 0)
  {
    seq4.setPixelColor(29, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(9, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(8, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(7, seq4.Color(c1, c2, c3));
    seq3.setPixelColor(6, seq3.Color(c1, c2, c3));
    seq3.setPixelColor(5, seq3.Color(c1, c2, c3));
    seq2.setPixelColor(6, seq2.Color(c1, c2, c3));
    seq2.setPixelColor(5, seq2.Color(c1, c2, c3));
    seq1.setPixelColor(22, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(21, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(20, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(0, seq1.Color(c1, c2, c3));

    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
  }
  if (n == 1)
  {
    seq4.setPixelColor(28, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(11, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(10, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(6, seq4.Color(c1, c2, c3));
    seq3.setPixelColor(7, seq3.Color(c1, c2, c3));
    seq3.setPixelColor(4, seq3.Color(c1, c2, c3));
    seq2.setPixelColor(7, seq2.Color(c1, c2, c3));
    seq1.setPixelColor(4, seq2.Color(c1, c2, c3));
    seq1.setPixelColor(23, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(19, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(18, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(1, seq1.Color(c1, c2, c3));

    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
  }
  if (n == 2)
  {
    seq4.setPixelColor(27, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(12, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(13, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(5, seq4.Color(c1, c2, c3));

    seq1.setPixelColor(24, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(17, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(16, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(2, seq1.Color(c1, c2, c3));

    seq1.show();
    seq4.show();
  }
  if (n == 3)
  {
    seq4.setPixelColor(26, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(14, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(15, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(4, seq4.Color(c1, c2, c3));
    seq3.setPixelColor(3, seq3.Color(c1, c2, c3));
    seq3.setPixelColor(8, seq3.Color(c1, c2, c3));
    seq2.setPixelColor(3, seq2.Color(c1, c2, c3));
    seq2.setPixelColor(8, seq2.Color(c1, c2, c3));
    seq1.setPixelColor(25, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(15, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(14, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(3, seq1.Color(c1, c2, c3));

    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
  }
  if (n == 4)
  {
    seq4.setPixelColor(25, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(16, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(17, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(3, seq4.Color(c1, c2, c3));
    seq3.setPixelColor(2, seq3.Color(c1, c2, c3));
    seq3.setPixelColor(9, seq3.Color(c1, c2, c3));
    seq2.setPixelColor(2, seq2.Color(c1, c2, c3));
    seq2.setPixelColor(9, seq2.Color(c1, c2, c3));
    seq1.setPixelColor(26, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(13, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(12, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(4, seq1.Color(c1, c2, c3));

    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
  }
  if (n == 5)
  {
    seq4.setPixelColor(24, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(18, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(19, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(2, seq4.Color(c1, c2, c3));
    seq3.setPixelColor(10, seq3.Color(c1, c2, c3));
    seq3.setPixelColor(1, seq3.Color(c1, c2, c3));
    seq2.setPixelColor(10, seq2.Color(c1, c2, c3));
    seq2.setPixelColor(1, seq2.Color(c1, c2, c3));
    seq1.setPixelColor(27, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(11, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(10, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(5, seq1.Color(c1, c2, c3));

    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
  }
  if (n == 6)
  {
    seq4.setPixelColor(23, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(20, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(21, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(1, seq4.Color(c1, c2, c3));
    seq3.setPixelColor(11, seq3.Color(c1, c2, c3));
    seq3.setPixelColor(0, seq3.Color(c1, c2, c3));
    seq2.setPixelColor(11, seq2.Color(c1, c2, c3));
    seq2.setPixelColor(0, seq2.Color(c1, c2, c3));
    seq1.setPixelColor(28, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(9, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(8, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(6, seq1.Color(c1, c2, c3));

    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
  }
  if (n == 7)
  {
    seq4.setPixelColor(22, seq4.Color(c1, c2, c3));
    seq4.setPixelColor(0, seq4.Color(c1, c2, c3));
    seq1.setPixelColor(29, seq1.Color(c1, c2, c3));
    seq1.setPixelColor(7, seq1.Color(c1, c2, c3));

    seq1.show();
    seq2.show();
    seq3.show();
    seq4.show();
  }
}
void espiralCentro(int c1, int c2, int c3, int delaymeio )
{
  seq2.setPixelColor(8, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq3.setPixelColor(3, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(4, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(7, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(4, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(3, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(2, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(9, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq3.setPixelColor(2, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(9, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(8, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(7, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(6, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(5, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(6, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(5, seq2.Color(c1, c2, c3));
  seq2.show();
}
void espiralPesqI(int c1, int c2, int c3, int delaymeio)
{
  seq2.setPixelColor(5, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(6, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq3.setPixelColor(5, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(6, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(7, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(8, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(9, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(2, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(9, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(2, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(3, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(4, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(7, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq3.setPixelColor(4, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(3, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(8, seq2.Color(c1, c2, c3));
  seq2.show();
}
void espiralPsupD(int c1, int c2, int c3, int delaymeio)
{
  seq3.setPixelColor(9, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(8, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(7, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(6, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(5, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(6, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(5, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(4, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(3, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(2, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(9, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq3.setPixelColor(2, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(3, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(4, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(7, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(8, seq2.Color(c1, c2, c3));
  seq2.show();
}
void diagonalCentro(int c1, int c2, int c3, int delaymeio)
{

  seq3.setPixelColor(9, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(2, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(8, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(9, seq2.Color(c1, c2, c3));
  seq3.setPixelColor(3, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(7, seq3.Color(c1, c2, c3));
  seq3.show();
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(2, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(8, seq2.Color(c1, c2, c3));
  seq3.setPixelColor(4, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(6, seq3.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(3, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(7, seq2.Color(c1, c2, c3));
  seq3.setPixelColor(5, seq3.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(4, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(6, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(5, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
}
void diagonalCentroOp(int c1, int c2, int c3, int delaymeio)
{
  seq2.setPixelColor(5, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(4, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(6, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(3, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(7, seq2.Color(c1, c2, c3));
  seq3.setPixelColor(5, seq3.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(2, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(8, seq2.Color(c1, c2, c3));
  seq3.setPixelColor(4, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(6, seq3.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(9, seq2.Color(c1, c2, c3));
  seq3.setPixelColor(3, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(7, seq3.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(2, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(8, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(9, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
}
void diagonalCentroIn(int c1, int c2, int c3, int delaymeio)
{
  seq2.setPixelColor(2, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(3, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(9, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq3.setPixelColor(2, seq3.Color(c1, c2, c3));
  seq2.setPixelColor(8, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(4, seq2.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(9, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(3, seq3.Color(c1, c2, c3));
  seq2.setPixelColor(7, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(5, seq2.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(8, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(4, seq3.Color(c1, c2, c3));
  seq2.setPixelColor(6, seq2.Color(c1, c2, c3));
  seq3.show();
  seq2.show();
  delay(delaymeio);
  seq3.setPixelColor(7, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(5, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(6, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
}
void diagonalCentroInOp(int c1, int c2, int c3, int delaymeio)
{
  seq3.setPixelColor(6, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(5, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(7, seq3.Color(c1, c2, c3));
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(8, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(4, seq3.Color(c1, c2, c3));
  seq2.setPixelColor(6, seq2.Color(c1, c2, c3));
  seq3.show();
  seq2.show();
  delay(delaymeio);
  seq3.setPixelColor(9, seq3.Color(c1, c2, c3));
  seq3.setPixelColor(3, seq3.Color(c1, c2, c3));
  seq2.setPixelColor(7, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(5, seq2.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq3.setPixelColor(2, seq3.Color(c1, c2, c3));
  seq2.setPixelColor(8, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(4, seq2.Color(c1, c2, c3));
  seq2.show();
  seq3.show();
  delay(delaymeio);
  seq2.setPixelColor(3, seq2.Color(c1, c2, c3));
  seq2.setPixelColor(9, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
  seq2.setPixelColor(2, seq2.Color(c1, c2, c3));
  seq2.show();
  delay(delaymeio);
}
void curvaMeio1(int c1, int c2, int c3, int delaymeio)
{
  for (int i = 9, j = 2; i >= 2; i-- && j++)
  {
    seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    seq3.setPixelColor(j, seq3.Color(c1, c2, c3));
    seq2.show();
    seq3.show();
    delay(delaymeio);
  }
}
void curvaMeio2(int c1, int c2, int c3, int delaymeio)
{
  for (int i = 2, j = 9; i < 10; i++ && j--)
  {
    seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    seq3.setPixelColor(j, seq3.Color(c1, c2, c3));
    seq2.show();
    seq3.show();
    delay(delaymeio);
  }
}
void curvaMeio3(int c1, int c2, int c3, int delaymeio)
{
  for (int i = 2; i < 10; i++)
  {
    seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaymeio);
  }
  for (int j = 2; j < 10; j++)
  {
    seq3.setPixelColor(j, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaymeio);
  }
}
void curvaMeio4(int c1, int c2, int c3, int delaymeio)
{
  for (int i = 9; i > 1; i--)
  {
    seq3.setPixelColor(i, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaymeio);
  }

  for (int i = 9; i > 1; i--)
  {
    seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaymeio);
  }
}
void curvaMeio5(int c1, int c2, int c3, int delaymeio)
{

  for (int i = 5, j = 5; i < 9; i++ && j++)
  {
    seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    seq2.setPixelColor(i + 1, seq2.Color(c1, c2, c3));
    seq3.setPixelColor(j, seq3.Color(c1, c2, c3));
    seq3.setPixelColor(j + 1, seq3.Color(c1, c2, c3));
    seq2.show();
    seq3.show();
    delay(delaymeio);
  }
}
void colunaMeio6(int n, int c1, int c2, int c3, int delaymeio)
{
  if (n == 0)
  {
    for (int i = 2; i < 6; i++)
    {
      seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    }
    seq2.show();
    delay(delaymeio);
  }
  if (n == 1)
  {
    for (int i = 6; i < 10; i++)
    {
      seq2.setPixelColor(i, seq2.Color(c1, c2, c3));
    }
    seq2.show();
    delay(delaymeio);
  }
  if (n == 2)
  {
    for (int i = 2; i < 6; i++)
    {
      seq3.setPixelColor(i, seq3.Color(c1, c2, c3));
    }
    seq3.show();
    delay(delaymeio);
  }
  if (n == 3)
  {
    for (int i = 6; i < 10; i++)
    {
      seq3.setPixelColor(i, seq3.Color(c1, c2, c3));
    }
    seq3.show();
    delay(delaymeio);
  }
}
void meio(int i, int c1, int c2, int c3, int delaymeio)
{
  if (i == 0)
  {
    espiralCentro(c1, c2, c3, delaymeio );
  }
  if (i == 1)
  {
    espiralPesqI(c1, c2, c3, delaymeio );
  }
  if (i == 2)
  {
    espiralPsupD(c1, c2, c3, delaymeio );
  }
  if (i == 3)
  {
    diagonalCentro(c1, c2, c3, delaymeio );
  }
  if (i == 4)
  {
    diagonalCentroOp(c1, c2, c3, delaymeio );
  }
  if (i == 5)
  {
    diagonalCentroIn(c1, c2, c3, delaymeio );
  }
  if (i == 6)
  {
    diagonalCentroInOp(c1, c2, c3, delaymeio );
  }
  if (i == 7)
  {
    curvaMeio1(c1, c2, c3, delaymeio );
  }
  if (i == 8)
  {
    curvaMeio2(c1, c2, c3, delaymeio );
  }
  if (i == 9)
  {
    curvaMeio3(c1, c2, c3, delaymeio );
  }
  if (i == 10)
  {
    curvaMeio4(c1, c2, c3, delaymeio );
  }
  if (i == 11)
  {
    curvaMeio5(c1, c2, c3, delaymeio );
  }
  if (i == 12)
  {
    for (int i = 0; i < 4; i++ )
    {
      colunaMeio6(i, c1, c2,  c3, delaymeio);
    }
  }
}
void cima(int n, int c1, int c2, int c3, int delaycima)
{
  if (n == 0)
  {
    seq2.setPixelColor(0, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaycima);
    seq2.setPixelColor(11, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaycima);
    seq3.setPixelColor(0, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaycima);
    seq3.setPixelColor(11, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaycima);
    seq2.setPixelColor(1, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaycima);
    seq2.setPixelColor(10, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaycima);
    seq3.setPixelColor(1, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaycima);
    seq3.setPixelColor(10, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaycima);
  }
  if (n == 1)
  {
    seq2.setPixelColor(0, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaycima);
    seq2.setPixelColor(1, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaycima);
    seq2.setPixelColor(11, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaycima);
    seq2.setPixelColor(10, seq2.Color(c1, c2, c3));
    seq2.show();
    delay(delaycima);
    seq3.setPixelColor(0, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaycima);
    seq3.setPixelColor(1, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaycima);
    seq3.setPixelColor(11, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaycima);
    seq3.setPixelColor(10, seq3.Color(c1, c2, c3));
    seq3.show();
    delay(delaycima);
  }
}
void curvaLados1(int c1, int c2, int c3, int c4, int c5, int c6, int delaylado)
{
  for (int i = 0, j = 29; i < 30; i++ && j--)
  {
    seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
    seq1.show();
    seq4.show();
    delay(delaylado);
  }
}
void curvaLados2(int c1, int c2, int c3, int c4, int c5, int c6, int delaylado)
{
  for (int i = 0, j = 0; i < 30; i++ && j++)
  {
    seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
    seq1.show();
    seq4.show();
    delay(delaylado);
  }
}
void curvaLados3(int c1, int c2, int c3, int c4, int c5, int c6, int delaylado)
{
  for (int i = 29, j = 0; i >= 0; i-- && j++)
  {
    seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
    seq1.show();
    seq4.show();
    delay(delaylado);
  }
}
void espiralLados(int c1, int c2, int c3, int c4, int c5, int c6, int delaylado)
{
  for (int i = 0, j = 7; i <= 7; i++ && j--)
  {
    seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
    seq1.show();
    seq4.show();
    delay(delaylado);
  }
  seq1.setPixelColor(8, seq1.Color(c1, c2, c3));
  seq1.setPixelColor(9, seq1.Color(c1, c2, c3));
  seq4.setPixelColor(20, seq4.Color(c4, c5, c6));
  seq4.setPixelColor(21, seq4.Color(c4, c5, c6));
  seq1.show();
  seq4.show();
  delay(delaylado);
  for (int i = 29, j = 22; i >= 22; i-- && j++)
  {
    seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
    seq1.show();
    seq4.show();
    delay(delaylado);
  }
  for (int i = 21, j = 8; i > 9; i-- && j++)
  {
    seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
    seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
    seq1.show();
    seq4.show();
    delay(delaylado);
  }
}
void BatidaLados(int n, int c1, int c2, int c3, int c4, int c5, int c6, int d)
{
  if (n == 0)
  {
    for ( int i = 29, j = 22 ; i >= 22; i-- && j++ )
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
      seq4.show();
      delay(d);
    }
  }
  if (n == 1)
  {
    for (int i = 21, j = 8; i >= 8; i-- && j++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
      seq4.show();
      delay(d);
    }
  }
  if (n == 2)
  {
    for (int i = 7, j = 0; i >= 0; i-- && j++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq4.setPixelColor(j, seq4.Color(c4, c5, c6));
      seq4.show();
      delay(d);
    }
  }

  if (n == 3)
  {
    for (int i = 29, j = 22; i >= 22;  i-- && j++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq1.show();
      delay(d);
    }
  }
  if (n == 4)
  {
    for (int i = 21, j = 8; i >= 8;  i-- && j++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq1.show();
      delay(d);
    }
  }
  if (n == 5)
  {
    for (int i = 7, j = 0; i >= 0;  i-- && j++)
    {
      seq1.setPixelColor(i, seq1.Color(c1, c2, c3));
      seq1.setPixelColor(j, seq1.Color(c4, c5, c6));
      seq1.show();
      delay(d);
    }
  }
}
void chuvaLados(int n, int c1, int c2, int c3, int c4, int c5, int c6, int d)
{
  if (n == 0)
  {
    for ( int i = 29 ; i >= 22; i--  )
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq1.setPixelColor(i, seq1.Color(c4, c5, c6));
      seq4.show();
      seq1.show();
      delay(d);
    }
  }
  if (n == 1)
  {
    for (int i = 21, j = 8; i >= 8; i-- && j++)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq1.setPixelColor(i, seq1.Color(c4, c5, c6));
      seq4.show();
      seq1.show();
      delay(d);
    }
  }
  if (n == 2)
  {
    for (int i = 7; i >= 0; i-- )
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq1.setPixelColor(i, seq1.Color(c4, c5, c6));
      seq4.show();
      seq1.show();
      delay(d);
    }
  }

  if (n == 3)
  {
    for (int i = 29; i >= 22;  i--)
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq1.setPixelColor(i, seq1.Color(c4, c5, c6));
      seq4.show();
      seq1.show();
      delay(d);
    }
  }
  if (n == 4)
  {
    for (int i = 21; i >= 8;  i-- )
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq1.setPixelColor(i, seq1.Color(c4, c5, c6));
      seq4.show();
      seq1.show();
      delay(d);
    }
  }
  if (n == 5)
  {
    for (int i = 7; i >= 0;  i-- )
    {
      seq4.setPixelColor(i, seq4.Color(c1, c2, c3));
      seq1.setPixelColor(i, seq1.Color(c4, c5, c6));
      seq4.show();
      seq1.show();
      delay(d);
    }
  }
}
void Lados(int n, int c1, int c2, int c3, int c4, int c5, int c6, int delaylado)
{
  if (n == 0)
  {
    curvaLados1(c1, c2, c3, c4, c5, c6, delaylado);
  }
  if (n == 1)
  {
    curvaLados1(c1, c2, c3, c4, c5, c6, delaylado);
  }
  if (n == 2)
  {
    curvaLados1(c1, c2, c3, c4, c5, c6, delaylado);
  }
  if (n == 3)
  {
    espiralLados(c1, c2, c3, c4, c5, c6, delaylado);
  }
  if (n == 4)
  {
    for (int i = 0; i <= 5; i++)
    {
      BatidaLados(i, c1, c2, c3, c4, c5, c6, delaylado);
    }
  }
  if (n == 5)
  {
    for (int i = 0; i <= 5; i++)
    {
      chuvaLados(i, c1, c2, c3, c4, c5, c6, delaylado);
    }
  }
}
*/


