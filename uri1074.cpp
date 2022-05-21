#include <iostream>

using namespace std;

int main(){

    int n, qtd;

    cin >> qtd;

    for(int i=0; i<qtd; i++){

        cin >> n;

        if(n%2 == 0){
            if(n>0){
                cout << "EVEN POSITIVE" << endl;
            }
            else if(n<0){
                cout << "EVEN NEGATIVE" << endl;
            }
            else{
                cout << "NULL" << endl;
            }

        }
        else{
            if(n>0){
                cout << "ODD POSITIVE" << endl;
            }
            else if(n<0){
                cout << "ODD NEGATIVE" << endl;
            }
        }
    }

return 0;
}
