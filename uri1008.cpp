#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);

    int numero, nhoras;
    double salario,total;

    cin >> numero;
    cin >> nhoras;
    cin >> salario;

    total = salario * nhoras;

    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << total << endl;

return 0;
}
