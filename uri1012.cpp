#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(3);

    double a,b,c,pi=3.14159, triangulo, circulo, trapezio, quadrado, retangulo;

    cin >> a >> b >> c;

    triangulo = a * c / 2;
    circulo = (c*c)*pi;
    trapezio = ((a+b)*c) /2;
    quadrado = b*b;
    retangulo = a*b;

    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;

return 0;
}
