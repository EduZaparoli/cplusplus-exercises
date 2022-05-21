#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(1);

    int posicao, i;
    double a[100];

    for(i=0; i<100; i++){

        cin >> a[i];

        if(a[i] <= 10){

        posicao = i;
        cout << "A[" << posicao << "] = " << a[i] << endl;
    }
    }


return 0;
}
