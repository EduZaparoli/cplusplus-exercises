#include <iostream>

using namespace std;

int main() {

    int senha=2002;

    while(true){
        cin >> senha;
        if(senha != 2002){
        cout << "Senha Invalida" << endl;
        }
        else{
        cout << "Acesso Permitido" << endl;
        break;
        }
    }

    return 0;
}
