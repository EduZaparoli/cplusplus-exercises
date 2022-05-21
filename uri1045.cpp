#include<iostream>
#include<algorithm>
#include <math.h>

using namespace std;

int main() {
    double arrTriangulo[3];
    cin >> arrTriangulo[0] >> arrTriangulo[1] >> arrTriangulo[2];
    sort(arrTriangulo, arrTriangulo + 3, greater<int>());
    double powA, powB, powC;
    powA = pow(arrTriangulo[0], 2);
    powB = pow(arrTriangulo[1], 2);
    powC = pow(arrTriangulo[2], 2);
    if (arrTriangulo[0] >= arrTriangulo[1] + arrTriangulo[2]) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if (powA == powB + powC) cout << "TRIANGULO RETANGULO" << endl;
        else if (powA > powB + powC) cout << "TRIANGULO OBTUSANGULO" << endl;
        else if (powA < powB + powC) cout << "TRIANGULO ACUTANGULO" << endl;
        if (arrTriangulo[0] == arrTriangulo[1] && arrTriangulo[0] == arrTriangulo[2]) cout << "TRIANGULO EQUILATERO" << endl;
        else if (arrTriangulo[0] == arrTriangulo[1] || arrTriangulo[0] == arrTriangulo[2] || arrTriangulo[1] == arrTriangulo[2]) cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}