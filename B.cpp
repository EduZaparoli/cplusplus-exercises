#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;


int main () {
    freopen("b.in", "r", stdin);
//freopen("b.out", "w", stdout);
    cout << fixed << setprecision(1);
    int i,n;
    double x1,x2,x3, x4 ;
    cin >> n;
    for( i=0;i<n;i++) {
        cin >> x1 >> x2 >> x3 >> x4;
        cout << (x1+x2+x3+x4)/4 << endl;
    }
    return 0;
}
