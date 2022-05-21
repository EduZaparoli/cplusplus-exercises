#include <iostream>

using namespace std;

int soma(int x, int y){     // X recebe o valor de A e Y recebe o valor de B

    int resultado;
    resultado = x + y;
    return resultado;       // retorna o valor de resultado

}

int main(){

    int a = 7;
    int b = 8;

    cout << "A soma e = " << soma(a,b) << endl;     // chamando a função soma

return 0;
}

