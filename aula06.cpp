#include <iostream>

using namespace std;

int n1,n2; //variaveis globais

int main(){

    int n3, n4; //variaveis locais
    int ress1, ress2;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    ress1 = n1/n2;
    ress2 = n1%n2;

    cout << "Divisao: " << ress1 << endl;
    cout << "Resto: " << ress2 << endl;

return 0;
}
