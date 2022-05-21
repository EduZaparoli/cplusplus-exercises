#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int a, qtd, valor=1, divisor=0;

    cin >> qtd;

    for(int i=0; i<qtd; i++){

        cin >> a;

    inicio:
        if(a%valor == 0){
            divisor++;
            valor++;
        }
        else{
            valor++;
        }
        if(valor <= a){
            goto inicio;
        }
        if(divisor == 2){
            cout << a << " eh primo" << endl;
        }
        else{
            cout << a << " nao eh primo" << endl;
        }

    }

return 0;
}
