#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(3);

    int temp, velomedia;
    double consumo, distancia;

    cin >> temp >> velomedia;

    distancia = velomedia * temp;
    consumo = distancia / 12;

    cout << consumo << endl;

return 0;
}
