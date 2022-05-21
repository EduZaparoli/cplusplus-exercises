#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);

    float a, b, c, area, perimetro;

    cin >> a >> b >> c;

    if(a + b > c and a + c > b and c + b > a){
        perimetro = a + b + c;
        cout << "Perimetro = " << perimetro << endl;
    }
    else{
        area = ((a + b) * c) / 2;
        cout << "Area = " << area << endl;
    }


    return 0;
}
