#include <iostream>
#include <cmath> 
using namespace std;
//Hier werden die Dimensionierungsrechnungen gemacht
double Ausschlagsspannung;
double Empfindlichkeit;
double U0 = 5.00; //Volt, input vom raspi


double Ausschlag(double R1, int R_DMS, double R3, double R4){
    Ausschlagsspannung = U0*((R3 / (R3+R4))-(R1 / (R1+R_DMS)));
    return Ausschlagsspannung;
}

double Empfindlichkeit_Funktion(int R1, int R_DMS){
    Empfindlichkeit = U0 * (R1 / pow((R1 + R_DMS), 2));
    return Empfindlichkeit;
}

int main(){
    double Wert = Empfindlichkeit_Funktion(350,350);
    for (int i = 340; i<360; i++){
        double Value = Ausschlag(350,i,350,350);
        cout << Value;
    }
    return 0;
}