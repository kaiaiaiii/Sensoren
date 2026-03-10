#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

using namespace std;

/*
Getting a pulse signal per second I guess, transform it to my cadence


#define PIN 15 
float DataFromSpeedometer(){
    pinMode(PIN, INPUT);
    vector<int> GPIOValue;

    while (true) {
        int value = digitalRead(PIN);
        GPIOValue.push_back(value);
        this_thread::sleep_for(chrono::milliseconds(20));

    }

    return PulesPerMinute;
}


float CadenceCalculation(int radius, float time, int ppm){

    return 0.0;
}

*/

int main(){
    
    pinMode(PIN, INPUT);
    vector<int> GPIOValue;

    while (true) {
        int value = digitalRead(PIN);
        GPIOValue.push_back(value);
        this_thread::sleep_for(chrono::milliseconds(20));

    }
    return 0;
}