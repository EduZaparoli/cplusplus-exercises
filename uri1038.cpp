#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);

    int cod, qtd;
    float total;

    cin >> cod >> qtd;

    switch(cod){
        case 1:
            total = qtd * 4.00;
            cout << "Total: R$ " << total << endl;
            break;
        case 2:
            total = qtd * 4.50;
            cout << "Total: R$ " << total << endl;
            break;
        case 3:
            total = qtd * 5.00;
            cout << "Total: R$ " << total << endl;
            break;
        case 4:
            total = qtd * 2.00;
            cout << "Total: R$ " << total << endl;
            break;
        case 5:
            total = qtd * 1.50;
            cout << "Total: R$ " << total << endl;
            break;
    }

return 0;
}
