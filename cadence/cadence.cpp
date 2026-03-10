#include <iostream>
#include <wiringPi.h>
#include <vector>
#include <chrono>
#include <thread>

using namespace std;

/*
Getting a pulse signal per second I guess, transform it to my cadence
*/

#define PIN 15 

float DataFromSpeedometer(){

    if (wiringPiSetup() == -1) {
        std::cerr << "Fehler beim Initialisieren von wiringPi!" << std::endl;
        return 1;
    }
    pinMode(PIN, INPUT);
    vector<int> GPIOValue;

    while (true) {
        int value = digitalRead(PIN);
        GPIOValue.push_back(value);
        this_thread::sleep_for(chrono::milliseconds(20));

    }

    return 0.0;
}


float CadenceCalculation(int radius, float time, int ppm){

    return 0.0;
}


int main(){

    DataFromSpeedometer();
    return 0;
}