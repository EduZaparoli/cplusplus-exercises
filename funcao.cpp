#include <iostream>

using namespace std;

int retornaValor(int a ,int b){

    return a + b;

}

float divideValor(int a, int b){

    return a / b;

}

int main(){

    int valor1, valor2;

    cin >> valor1 >> valor2;

    cout << "A soma e: " << retornaValor(valor1,valor2) << endl;
    cout << "A divisao e: " << divideValor(valor1, valor2) << endl;

return 0;
}
