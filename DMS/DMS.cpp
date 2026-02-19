#include <iostream>
#include <wiringPi.h>
using namespace std;
//soweit ich das richtig interpretiere gibt es auser libgpiod nichts wirkliches, und das ist auch seit 3 Jahren tod

vector<string> WriteDataToFile(string Filename){
    
}

int main(){
    if(wiringPiSetup()== -1){
        return 1;
        }
    pinMode(0, OUTPUT);
    while(1){
        digitalWrite(0, 1); 
        delay(100); 
        digitalWrite(0, 0); 
        delay(100);
    }
    return 0;
}