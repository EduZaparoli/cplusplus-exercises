#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double area, n=3.14159, raio;

    cin >> raio;

    area = n*(raio*raio);

    cout << fixed << setprecision(4) << endl;

    cout << "A=" << area << endl;;

    return 0;
}
