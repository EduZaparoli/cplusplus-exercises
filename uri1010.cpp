#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);

    int peca1,peca2,numpeca1,numpeca2;
    double valorpeca1,valorpeca2,totalpagar;

    cin >> peca1;
    cin >> numpeca1;
    cin >> valorpeca1;
    cin >> peca2;
    cin >> numpeca2;
    cin >> valorpeca2;

    totalpagar = (numpeca1*valorpeca1)+(numpeca2*valorpeca2);

    cout << "VALOR A PAGAR: R$ " << totalpagar << endl;

return 0;
}
