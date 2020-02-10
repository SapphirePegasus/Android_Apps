//PrittamPEGASUS-3000
//Arduino Bluetooth Control App
//The app for this code has 16 input buttons but since Arduino Uno has only 12 digital pins and out of which 2 pins are for the TX and RX connection, we can only use 10 pins from 3 to 12.
//16 input buttons can be used if you are using an Arduino Mega. In that case even more buttons can be included.

int c1=3;
int c2=4;
int c3=5;
int c4=6;
int c5=7;
int c6=8;
int c7=9;
int c8=10;
int c9=11;
int c10=12;
//Add more pins here

int Received = 0;
int c1_state = 0;
int c2_state = 0;
int c3_state = 0;
int c4_state = 0;
int c5_state = 0;
int c6_state = 0;
int c7_state = 0;
int c8_state = 0;
int c9_state = 0;
int c10_state = 0;
//Add more for state

void setup(){  
  Serial.begin(9600);
  pinMode(c1,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(c3,OUTPUT);
  pinMode(c4,OUTPUT);
  pinMode(c5,OUTPUT);
  pinMode(c6,OUTPUT);
  pinMode(c7,OUTPUT);
  pinMode(c8,OUTPUT);
  pinMode(c9,OUTPUT);
  pinMode(c10,OUTPUT);
  //Add more for output  
}

void loop(){ 
 if(Serial.available()>0)
 { 
    Received = Serial.read();    
 }
 
//Control 1 
if (c1_state == 0 && Received == '1')
  {
    digitalWrite(c1,HIGH);
    c1_state=1;
    Received=0;  
  }
if (c1_state ==1 && Received == '1')
  {
    digitalWrite(c1,LOW);
    c1_state=0;
    Received=0;
  }
  
//Control 2 
if (c2_state == 0 && Received == '2')
  {
    digitalWrite(c2,HIGH);
    c2_state=1;
    Received=0;  
  }
if (c2_state ==1 && Received == '2')
  {
    digitalWrite(c2,LOW);
    c2_state=0;
    Received=0;
  }
  
//Control 3  
if (c3_state == 0 && Received == '3')
  {
    digitalWrite(c3,HIGH);
    c3_state=1;
    Received=0;  
  }
if (c3_state ==1 && Received == '3')
  {
    digitalWrite(c3,LOW);
    c3_state=0;
    Received=0;
  }
  
//Control 4 
if (c4_state == 0 && Received == '4')
  {
    digitalWrite(c4,HIGH);
    c4_state=1;
    Received=0;  
  }
if (c4_state ==1 && Received == '4')
  {
    digitalWrite(c4,LOW);
    c1_state=0;
    Received=0;
  }

//Control 5 
if (c5_state == 0 && Received == '5')
  {
    digitalWrite(c5,HIGH);
    c4_state=1;
    Received=0;  
  }
if (c5_state ==1 && Received == '5')
  {
    digitalWrite(c5,LOW);
    c5_state=0;
    Received=0;
  }

//Control 6 
if (c6_state == 0 && Received == '6')
  {
    digitalWrite(c6,HIGH);
    c6_state=1;
    Received=0;  
  }
if (c6_state ==1 && Received == '6')
  {
    digitalWrite(c6,LOW);
    c6_state=0;
    Received=0;
  }

//Control 7
if (c7_state == 0 && Received == '7')
  {
    digitalWrite(c7,HIGH);
    c7_state=1;
    Received=0;  
  }
if (c7_state ==1 && Received == '7')
  {
    digitalWrite(c7,LOW);
    c7_state=0;
    Received=0;
  }

//Control 8 
if (c4_state == 0 && Received == '8')
  {
    digitalWrite(c8,HIGH);
    c8_state=1;
    Received=0;  
  }
if (c8_state ==1 && Received == '8')
  {
    digitalWrite(c8,LOW);
    c8_state=0;
    Received=0;
  }

//Control 9 
if (c9_state == 0 && Received == '9')
  {
    digitalWrite(c9,HIGH);
    c9_state=1;
    Received=0;  
  }
if (c9_state ==1 && Received == '9')
  {
    digitalWrite(c9,LOW);
    c9_state=0;
    Received=0;
  }

//Control 10 
if (c10_state == 0 && Received == "10")
  {
    digitalWrite(c10,HIGH);
    c10_state=1;
    Received=0;  
  }
if (c10_state ==1 && Received == "10")
  {
    digitalWrite(c10,LOW);
    c10_state=0;
    Received=0;
  }
//Add more control after this if needed
}
