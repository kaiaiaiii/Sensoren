#include <iostream>
using namespace std;
//Hier werden die Dimensionierungsrechnungen gemacht
float Ausschlagsspannung;
float Empfindlichkeit;

float Ausschlag(int R1, int R_DMS, int R3, int R_4, int U0){
    Ausschlagsspannung = 
    return Ausschlagsspannung;
}

float Empfindlichkeit(int R1, int R_DMS, int U0){
    Empfindlichkeit = U0 * ((R1)/((R1+R_DMS)*(R1+R_DMS)));
    cout << Empfindlichkeit;
    return Empfindlichkeit;
}

int main(){
    
    return 0;
}