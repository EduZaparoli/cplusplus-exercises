#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << fixed << setprecision(1);

    double M[20][20], a=0;


    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            cin >> M[i][j];
            if(j<i and i!=j){
                a+= M[i][j];
            }
        }
    }


       cout << a <<endl;


}
