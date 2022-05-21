#include <iostream>

using namespace std;

int main() {

    int x = 0, y = 0, soma = 0;

    cin >> x >> y;

    if(x > y){

        for(int i = x - 1; i > y; i--){
            if(i % 2 != 0){

                soma = soma + i;

            }
        }

        cout << soma << std::endl;

        soma = 0;
    }
    else if (x == y ||  y == x){

        cout << soma << std::endl;

    }

    return 0;
}
