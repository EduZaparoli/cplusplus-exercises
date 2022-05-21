#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(2);

    float x, y, z;
    y = 0;
    z = 0;
    while(true){
        cin >> x;
        if(x < 0 || x > 10){
              cout << "nota invalida" << endl;
        }
        else if(z == 0){
              y = x;
              z = 1;
        }else{
              cout << "media = " << (y+x)/2;
              break;
        }
    }
    return 0;
}
