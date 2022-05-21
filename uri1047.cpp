#include <iostream>

using namespace std;

int main(){

    int hrinicio, mininicial, hrfim, minfinal, total, totalmin;

    cin >> hrinicio >> mininicial >> hrfim >> minfinal;

    if(hrinicio >= hrfim){
        total = (24 - hrinicio) + hrfim;
        if(mininicial <= minfinal){
            totalmin = total %24;
        }
        else{
            totalmin = mininicial - minfinal;
        }
        cout << "O JOGO DUROU " << total << " HORA(S) E " << totalmin << " MINUTO(S)" << endl;
    }
    else{
        total = hrfim - hrinicio;
        if(mininicial <= minfinal){
            totalmin = total %24;
        }
        else{
            totalmin = total %24;
        }
        cout << "O JOGO DUROU " << total << " HORA(S) E " << totalmin << " MINUTO(S)" << endl;
    }

    return 0;
}
