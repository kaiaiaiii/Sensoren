#include <wiringPi.h> 
#include <iostream>
using namespace std;

int main(void)
{
  wiringPiSetupGpio();

  pinMode(17, INPUT);
  pullUpDnControl(17, PUD_DOWN);

  int value = digitalRead(17);

  if (value == HIGH){
    cout << "Test";
  }
}