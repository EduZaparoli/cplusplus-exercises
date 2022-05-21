#include <iostream>

using namespace std;

int main() {

    float n[6];
    int i, cont = 0;

    for(i = 0; i < 6; i++){
        cin >> n[i];
        if(n[i] > 0){
            cont++;
        }
    }

    cout << cont << " valores positivos" << endl;


    return 0;
}
