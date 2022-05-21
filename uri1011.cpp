#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(3);

    double raio, pi=3.14159, volume;

    cin >> raio;

    volume = (4.0/3) * pi * (raio*raio*raio);

    cout << "VOLUME = " << volume << endl;

return 0;
}
