#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int tipo, contA=0, contG=0, contD=0;

    inicio:

    while(true){

        cin >> tipo;

        if(tipo == 1){
            contA++;
        }
        else if(tipo == 2){
            contG++;
        }
        else if(tipo == 3){
            contD++;
        }
        if(tipo == 4){
            break;
        }
        if(tipo > 4 || tipo < 1){
            goto inicio;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << contA << endl;
    cout << "Gasolina: " << contG << endl;
    cout << "Diesel: " << contD << endl;

    return 0;
}
