#include <iostream>

using namespace std;

void ordenacao(int vetor[], int n){

    int menor, aux;

    for(int i=0; i<n-1; i++){
        menor = i;
        for(int j=i+1; j<n; j++){
            if(vetor[menor] > vetor[j]){
                menor = j;
            }
        }
        if(i != menor){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }

}


int main(){

    int vetor[3];

    for(int i=0; i<3; i++){
        cin >> vetor[i];
    }

    ordenacao(vetor);

    for(int i=0; i<vetor[i]; i++){
        cout << vetor[i] << endl;
    }

return 0;
}
