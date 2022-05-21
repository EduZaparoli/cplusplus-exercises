#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout<<fixed<<setprecision(1);

    double M[20][20],s=0;
    int ct=0;

    for(int i=0; i<20 ; i++){

        for(int j=0;j<20;j++){

        cin>>M[i][j];

        if(i+j!=19){

        s+=M[i][j];

        ct++;
            }
        }
    }

    s = soma/ct;

    cout<< s <<endl;

return 0;
}
