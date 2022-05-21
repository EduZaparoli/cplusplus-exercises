#include <iostream>
#define TAM 10

using namespace std;

int main(){

    int vetor[TAM], tamanho, menorvet=1000, posicao;

    cin >> tamanho;

    for(int i=0; i < tamanho; i++){

        cin >> vetor[i];

        if(vetor[i] < menorvet){

            menorvet = vetor[i];
            posicao = i;
        }

        }

        cout << "O menor valor e: " << menorvet << endl;
        cout << "A posicao do vetor e: " << posicao << endl;
return 0;
}
