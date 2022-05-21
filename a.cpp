#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;


int main () {
    cout << fixed << setprecision (1);
    int n;
    double n1,n2,n3,soma;
    cin >> n;
    for (int i=1;i<=n;i=i+1){
        cin >>n1>>n2>>n3;
        soma = (n1 + n2 + n3);
        cout << soma << endl;
    }
    return 0;
}
