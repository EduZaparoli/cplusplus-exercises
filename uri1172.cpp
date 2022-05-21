#include <iostream>

using namespace std;

int main(){

    int vetor[10];
    int i;

    cin >> vetor[0];
    cin >> vetor[1];
    cin >> vetor[2];
    cin >> vetor[3];
    cin >> vetor[4];
    cin >> vetor[5];
    cin >> vetor[6];
    cin >> vetor[7];
    cin >> vetor[8];
    cin >> vetor[9];

    for(i=0; i<10; i++){
        if(vetor[i] <=0){
    vetor[i] = 1;
    cout << "X[" << i << "] = " <<  vetor[i] << endl;
        }
        else{
    cout << "X[" << i << "] = " <<  vetor[i] << endl;
        }
    }

return 0;
}
