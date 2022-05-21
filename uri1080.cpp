#include <iostream>
#define TAM 100

using namespace std;

int main(){

    int vetor[TAM], maiorvet=0, posicao;

    for(int i=0; i < TAM; i++){

        cin >> vetor[i];

        if(vetor[i] > maiorvet){

            maiorvet = vetor[i];
            posicao = i+1;
        }

        }

        cout << maiorvet << endl;
        cout << posicao << endl;

return 0;
}
