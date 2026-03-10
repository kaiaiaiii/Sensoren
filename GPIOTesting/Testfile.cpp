#include <wiringPi.h>
#include <iostream>
#include <chrono>
#include <thread>

#define PIN 15

int main() {
    // wiringPi initialisieren
    if (wiringPiSetup() == -1) {
        std::cerr << "Fehler beim Initialisieren von wiringPi!" << std::endl;
        return 1;
    }

    // Pin als Eingang setzen
    pinMode(PIN, INPUT);

    std::cout << "Lese Werte von GPIO Pin 15..." << std::endl;

    while (true) {
        int value = digitalRead(PIN);

        std::cout << "GPIO 15 Wert: " << value << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}