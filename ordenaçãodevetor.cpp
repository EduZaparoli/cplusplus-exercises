#include <iostream>

using namespace std;

#define TOTAL 7

int main(){

    /*
    0 1  0 1  0 1  0 1  0 1  0 1
    1 2  1 2  1 2  1 2  1 2
    2 3  2 3  2 3  2 3
    3 4  3 4  3 4
    4 5  4 5
    5 6
    */

     int cont;
     int vetor[TOTAL];
     int auxiliar;
     int r, i;
     int valores;

     cout << "Preencha este vetor com " << TOTAL << " posicoes:" << endl;

    for(i=0; i < TOTAL; i++){

            cin >> vetor[i];

    }

        for(r=1; r<TOTAL-1; r++){

            for(cont = 0; cont < TOTAL-1; cont++){

                if(vetor[cont] > vetor[cont+1]){

                    auxiliar = vetor[cont];
                    vetor[cont] = vetor[cont+1];
                    vetor[cont+1] = auxiliar;

                }

            }

         }

     for(cont = 0; cont < TOTAL; cont++){

        cout << cont << "-" << vetor[cont] << endl;

     }


return 0;
}
