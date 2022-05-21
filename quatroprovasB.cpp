#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double P1[30], P2[30], P3[30], P4[30];
    double M[30];
    int Pos;

        for(int a=0; a<30; a++){
        cin >> P1[a];
    }

        for(int b=0; b<30; b++){
        cin >> P2[b];
    }

        for(int c=0; c<30; c++){
        cin >> P3[c];
    }

        for(int d=0; d<30; d++){
        cin >> P4[d];
    }

        for(int e=0; e<30; e++){
        M[e] = ((P1[e] * 2) + (P2[e] * 3) + (P3[e] * 4) + (P4[e] * 1)) / 10;
        cout << fixed << setprecision(1) << M[e] << endl;
    }

        cin >> Pos;

        cout << M[Pos] << endl;

return 0;
}
