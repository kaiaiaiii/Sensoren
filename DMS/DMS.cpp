#include <iostream>
#include <wiringPi.h>
#include "DMS.h"
using namespace std;

double Value_PIN8;
double Value_PIN10;
const int GAIN_128 = 25;
const int GAIN_64 = 27;
const int doutPin = 8;
const int sckPin = 10;

void setup(){
    Serial.begin(57600);
    pinMode(doutPin, INPUT);
    pinMode(sckPin, Output)
}

void loop(){
    unsigned long raw = readHX711();
    Serial.println(raw);
    delay(600)
}

unsigned long readHX711(){
    unsigned long data = 0;
    uint8_t dout;
      while(digitalRead(doutPin)){}  // wait until value is available
  for (uint8_t i=0; i<GAIN_128; i++){   //highest Gain
    digitalWrite(sckPin, 1);
    digitalWrite(sckPin, 0);
    if (i < (24)){
      dout = digitalRead(doutPin);
      data = (data << 1) | dout;
    }
  }
  data = data ^ 0x800000; // flip bit 23
  
  return data; 
}

void powerDown(){
  digitalWrite(sckPin, LOW);
  digitalWrite(sckPin, HIGH);
}

void powerUp(){
  digitalWrite(sckPin, LOW);
}

vector<string> WriteDataToFile(string Filename, double U1/*=Pin8*/, double U2/*=Pin10*/){
    
}

int main(){
    while(true){
    double Value_PIN8 = digitalRead(8);
    double Value_PIN10 = digitalRead(10);
    WriteDataToFile(Value_PIN10, Value_PIN8);
    cout << Value_PIN8;
    cout << Value_PIN10;  
    }
    return 0;
}