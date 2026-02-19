#include <iostream>
#include <wiringPi.h>
using namespace std;
//soweit ich das richtig interpretiere gibt es auser libgpiod nichts wirkliches, und das ist auch seit 3 Jahren tod
double Value_PIN8;
double Value_PIN10;


vector<string> WriteDataToFile(string Filename, double U1/*=Pin8*/, double U2/*=Pin10*/){
    
}

int main(){
    while(true){
    double Value_PIN8 = digitalRead(8);
    double Value_PIN10 = digitalRead(10);
    WriteDataToFile(Value_PIN10, Value_PIN8);

    }
    return 0;
}