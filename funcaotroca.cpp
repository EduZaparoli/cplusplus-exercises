#include <iostream>

using namespace std;

int troca(int x, int y){

    int aux;

    aux = x;
    x = y;
    y = aux;

}

int main(){

    int a, b;

    cout << "Digite um valor: ";
    cin >> a;
    cout << "Digite outro valor: ";
    cin >> b;

    cout << troca(a, b) << endl;

}