#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);

    string nome;
    double salario,totalvendas,total;

    cin >> nome;
    cin >> salario;
    cin >> totalvendas;

    total = (totalvendas*0.15)+salario;

    cout << "TOTAL = R$ " << total << endl;

return 0;
}
