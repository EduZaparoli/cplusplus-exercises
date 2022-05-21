#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(1);

    int a,b,qtd;
    double res;

    cin >> qtd;

    for(int i=0; i<qtd; i++){

        cin >> a >> b;

        if(a >= 0){
            res = a/b;
            cout << res << endl;
        }
        else{
            cout << "divisao impossivel" << endl;
        }
    }

return 0;
}
