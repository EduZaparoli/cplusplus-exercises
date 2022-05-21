#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(1);

    double X[100];
    double Y[100];
    int a;

    for(int i=0; i<=99; i++){
        cin >> X[i];
        if(X[i] <0){
            Y[i] = -1 * (X[i] * 4);
        }
        else {
            Y[i] = (X[i] * 4);
        }

        cout << "Y[" << i << "]=" << Y[i] << endl;
    }

        cin >> a;
        cout << "Y[" << a << "]=" << Y[a] << endl;

return 0;
}
