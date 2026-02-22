#include <wiringPi.h> 
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    wiringPiSetupGpio();

    pinMode(17, INPUT);
    pinMode(18, INPUT);
    pullUpDnControl(17, PUD_DOWN);
    pullUpDnControl(18, PUD_DOWN);

    vector<int> Ergebnisse = {0, 0};
    while(true){
    int value = digitalRead(17);
    if (value == HIGH){
        cout << "Test";
        //Ergebnisse.push_back(1);
    }
    else{
        cout << "LOW";
      //  Ergebnisse.push_back(0);
    }
    delay(100);
    }
}