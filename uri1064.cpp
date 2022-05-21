#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);

    float n[6], media = 0;
    int cont = 0;

    for(int i = 0; i<6; i++){
        cin >> n[i];

        if(n[i] > 0){
            cont++;
            media = media + n[i];
        }

    }
    cout << cont << " valores positivos" << endl;
    cout << media / cont << endl;

    return 0;
}
