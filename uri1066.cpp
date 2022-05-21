#include <iostream>

using namespace std;

int main(){

    int n[5], contPar=0, contImpar=0, contPos=0, contNeg=0;

    for(int i=0; i<5; i++){
        cin >> n[i];

        if(n[i]%2 == 0){
            contPar++;
                if(n[i] > 0){
                contPos++;
                }
                    else if(n[i] < 0){
                    contNeg++;
                    }
        }
        else if(n[i]%2 != 0){
            contImpar++;
            if(n[i] > 0){
                contPos++;
                }
                    else if(n[i] < 0){
                    contNeg++;
                    }
        }
    }
    cout << contPar << " valor(es) par(es)" << endl;
    cout << contImpar << " valor(es) impar(es)" << endl;
    cout << contPos << " valor(es) positivo(s)" << endl;
    cout << contNeg << " valor(es) negativo(s)" << endl;

return 0;
}
