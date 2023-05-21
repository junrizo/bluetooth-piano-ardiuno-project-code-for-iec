#include <SoftwareSerial.h>
SoftwareSerial myserial (5,6);

int LED1 = 7;
int LED2 = 8;
int LED3 = 9;
int LED4 = 10;
int biz = 11;

void setup(){
myserial.begin(9600);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(biz,OUTPUT);
}
void loop(){
if(myserial.available()){
char x=myserial.read();
if( x=='1'){
   tone(biz,262,500);
   digitalWrite(LED1,HIGH);
   delay(500);
   digitalWrite(LED1,LOW);

   }

if (x=='2'){
   tone(biz,300,500);
   digitalWrite(LED2,HIGH);
   delay(500);
   digitalWrite(LED2,LOW);

}

if (x=='3'){
    tone(biz,400,500);
    digitalWrite(LED3,HIGH);
    delay(500);
    digitalWrite(LED3,LOW);

}
if (x=='4'){
    tone(biz,550,500);
    digitalWrite(LED4,HIGH);
    delay(500);
    digitalWrite(LED4,LOW);

    }
}
}
