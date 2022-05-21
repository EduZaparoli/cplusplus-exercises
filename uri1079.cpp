#include <iostream>
#include <iomanip>

 using namespace std;

 int main(){

     cout << fixed << setprecision(1);

    int n;
    float teste[3], resultado;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> teste[0];
        cin >> teste[1];
        cin >> teste[2];
        resultado = ((teste[0] * 2) + (teste[1] * 3) + (teste[2] * 5)) / 10;
        cout << resultado << endl;
    }

 return 0;
 }
