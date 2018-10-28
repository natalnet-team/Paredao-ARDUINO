import processing.serial.*;
import ddf.minim.*;

Serial myPort;  // Create object from Serial class
String val;      // Data received from the serial port
Minim minim;
AudioPlayer groove;


void setup() 
{
  
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
  minim = new Minim(this);
  size(512, 200, P3D);
  groove  = minim.loadFile("Cientec - 2018 - Animação Completa.mp3", 2048); 
}
int num=1;
void draw(){ //<>//
  if ( myPort.available() > 0) {  // If data is available,
    val = myPort.readStringUntil('\n'); 
    // read it and store it in val
  }
     
  if(val != null){
     
     char a = val.charAt(0);
     println(a);
     if(a == '1'){     
        groove.loop();  
       delay(groove.length());
}
    
delay(1000);  
}
}



/*

// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.

int switchPin = 4;                       // Switch connected to pin 4

void setup() {
  pinMode(switchPin, INPUT);             // Set pin 0 as an input
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
  if (digitalRead(switchPin) == HIGH) {  // If switch is ON,
    Serial.write(1);               // send 1 to Processing
  } else {                               // If the switch is not ON,
    Serial.write(0);               // send 0 to Processing
  }
  delay(100);                            // Wait 100 milliseconds
}

*/