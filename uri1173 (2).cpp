#include <iostream>

using namespace std;

int main(){

    int vetor[10], posicao, n, valor;

    cin >> n;

    vetor[0] = n;



    for(int i=0; i<10; i++){

        posicao = i;
        valor = vetor[i-1] * 2;

        cout << "N[" << posicao << "] = " << valor << endl;

    }



return 0;
}
