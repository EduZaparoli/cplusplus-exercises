#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){

    srand(time(NULL));

    int vetor[20], aux;

    for(int i=0; i<20; i++){

        vetor[i] = rand()%999;

    }

    for(int i=0; i<20; i++){

        for(int j=i+1; j<20; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }

    }

        for(int i=0; i<20; i++){

        cout << "indice = [" << i << "]" << " " << "Vetor = [" << vetor[i] << "]"<< endl;

    }
return 0;
}
