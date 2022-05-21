#include <iostream>
#define QTD 10

using namespace std;

string numeros[QTD];
string baldes[10][QTD];

void iniciarBaldes(){

    for (int b = 0; b < 10; b++){
        for (int i = 0; i < QTD; i++){
            baldes[b] [i] =-1;
        }
        
    }

}

void entradaDeDados(){

    cout << "Informe " << QTD << " números ";

}