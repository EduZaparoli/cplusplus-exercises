#include <iostream>

using namespace std;

int main(){

    int val1, val2, soma=0;

    cin >> val1 >> val2;

    if(val1 < val2){
        for(int i=val1; i<=val2; i++){
            if(i%13 != 0){
                soma = soma + i;
            }
        }
    }else{
        for(int i=val2; i<=val1; i++){
            if(i%13 != 0){
                soma = soma + i;
            }
        }
    }
    cout << soma << endl;

return 0;
}
