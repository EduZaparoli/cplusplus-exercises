#include <iostream>
#define TOTAL 5

using namespace std;

int main(){

    int vetor[TOTAL], aux=0;
    int i, j;

    for(i=0; i<TOTAL; i++){
        cin >> vetor[i];
    }

        for(i=0; i<TOTAL; i++){

        for(j=i+1; j<TOTAL; j++){

            if(vetor[j] > vetor[i]){

                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;

            }

        }

        cout <<"Indice = " << i << " " << "vetor = " << vetor[i] << endl;
    }



return 0;
}
