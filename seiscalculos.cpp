#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;


int main () {
    cout << fixed << setprecision (1);
    int n;
    double n1,n2,n3,n4,n5,n6,n7,mediap, median, quantidade, maior, menor,valornulo,pos, neg;
        cin >> n;
    for (int i=1;i<=n;i=i+1){
        cin >>n1>>n2>>n3>>n4>>n5>>n6>>n7;
        if(n1 or n2 or n3 or n4 or n5 or n6 or n7 > 0){
            pos++;
    }
        if(n1 or n2 or n3 or n4 or n5 or n6 or n7 < 0){
            neg++;
    }

        cout << pos << neg << endl;
    }
    return 0;
}
