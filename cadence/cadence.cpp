#include <iostream>
#include <wiringPi.h>
#include <vector>
#include <chrono>
#include <thread>
#include <fstream>

using namespace std;

/*
Getting a pulse signal per second I guess, transform it to my cadence
*/

#define PIN 15 

float WriteDataToFile(vector<int> inputvector){
    ofstream file_out("PulseData");
    for(int i = 0; i < inputvector.size(); i++){
        file_out << inputvector[i] << endl;
    }
    return 0.0;
}


int main(){

    if (wiringPiSetup() == -1) {
        cerr << "Fehler beim Initialisieren von wiringPi!" << endl;
        return 1;
    }
    pinMode(PIN, INPUT);
    vector<int> GPIOValue;

    while (true) {
        int value = digitalRead(PIN);
        GPIOValue.push_back(value);
        cout << value << endl;
        this_thread::sleep_for(chrono::milliseconds(20));
        
    }
    WriteDataToFile(GPIOValue);
    return 0;
}