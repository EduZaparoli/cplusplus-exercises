#include <iostream>

using namespace std;

int main(){

    int vetor[20];
    int maior, menor;

    cout << "Informe 20 valores inteiros positivos: " << endl;

    for(int i=0; i<20; i++){
        do{
            cin >> vetor[i];
        if(vetor[i] < 1){

            cout << "Valor Invalido" << endl;
            cout << "Digite outro valor" << endl;
        }
        }while(vetor[i] < 1);
    }

    maior=vetor[0];
    menor=vetor[0];

    for(int i=0; i<20; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        else if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    cout << "O maior valor e: " << maior << endl;
    cout << "O menor valor e: " << menor << endl;

return 0;
}
