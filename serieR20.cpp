#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double R[20];
    double test, Num1=5, Num2=2;

    cin >> test;

    for(int i = 0; i < 20; i++){
    R[i] = pow(test, Num2) / Num1;
    Num1 +=5;
    Num2 +=2;
    }

    for(int j = 19; j >= 0; j--){

    cout << fixed << setprecision(1) << "R[" << j << "]=" << R[j] << endl;
    }

return 0;
}
