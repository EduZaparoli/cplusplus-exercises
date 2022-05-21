#include <iostream>

using namespace std;

int main() {

    int N, X, Y, SOMA;
    cin >> N;
    while (N--){
        cin >> X >> Y;
        if(X > Y){
            int aux = X;
            X = Y;
            Y = aux;
        }
        SOMA = 0;
        for (int i = X+1; i<Y; i = i + 1){
           if(i%2!=0) SOMA = SOMA + i;
        }
        cout << SOMA << endl;
    }

return 0;
}
