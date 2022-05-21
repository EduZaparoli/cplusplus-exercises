#include <iostream>

using namespace std;

int main(){

    int hrinicio, hrfim, total;

    cin >> hrinicio >> hrfim;

    if(hrinicio >= hrfim){
        total = (24 - hrinicio) + hrfim;
        cout << "O JOGO DUROU " << total << " HORA(S)" << endl;
    }
    else{
        total = hrfim - hrinicio;
        cout << "O JOGO DUROU " << total << " HORA(S)" << endl;
    }

    return 0;
}
