#include <iostream>

using namespace std;

#define TOTAL 100

int main(){

    int vetor[100];

    cout << "Preencha esse vetor com " << TOTAL << " valores inteiros!" << endl;

    for(int i=0; i < TOTAL; i++){

        cin >> vetor[i];

    }

return 0;
}
