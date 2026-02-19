#include <iostream>
#include <cmath> 
using namespace std;
//Hier werden die Dimensionierungsrechnungen gemacht
double Brueckenspannung;
double Brueckenspannung_Strom;
double Empfindlichkeit;
double U_0 = 5.00; //Volt, input vom raspi
double I_0 = 5; // Ampere, evtl auch input
// double Empfindlichkeit_Datenblatt=2.0;
// double Dehnlimit_Datenblatt = 0.02;

double Brueckenspannung_Spannungsgespeist(double delta_R, double R_134){      // nach Elektrische Messtechnik Seite 131
    Brueckenspannung = U_0*((delta_R)/(2*(2*R_134+delta_R)));
    return Brueckenspannung;
}

double Brueckenspannung_Stromgespeist(double delta_R, double R_134){      // nach Elektrische Messtechnik Seite 131
    Brueckenspannung_Strom = I_0*((delta_R)/(2*(2*R_134+delta_R)));
    return Brueckenspannung_Strom;
}

double Empfindlichkeit_Funktion(int R1, int R_DMS){
    Empfindlichkeit = U_0 * (R1 / pow((R1 + R_DMS), 2));
    return Empfindlichkeit;
}

int main(){
    double Wert = Empfindlichkeit_Funktion(350,350);
    for (int i = 1; i<20; i++){
        double laufvariable = i/100.0;
        double Value = Brueckenspannung_Spannungsgespeist(laufvariable,350);
        cout << Value << endl;
    }
    return 0;
}