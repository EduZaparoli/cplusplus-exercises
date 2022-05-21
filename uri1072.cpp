#include <iostream>

using namespace std;

int main() {

    int n, valores[100], contDentro = 0, contFora = 0;

    cin >> n;

    for(int i = 0; i<n; i++){

        cin >> valores[i];

        if(valores[i] >= 10 && valores[i] <= 20){
            contDentro++;
        }
        else{
            contFora++;
        }

    }
    cout << contDentro << " in" << endl;
    cout << contFora << " out" << endl;

    return 0;
}
