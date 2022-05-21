#include <iostream>

using namespace std;

int soma(int x, int y){

    int resultado;
    resultado = x + y;
    return resultado;

}

int main(){ 

    int a = 7;
    int b = 8;
    cout << "soma = " << soma(a, b);

}