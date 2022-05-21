#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main () {
   freopen("c.in", "r", stdin);
   cout << fixed << setprecision(1);
    int i,j;
    for (i=1,j=100;j>=70;i=i*2,j--) {
        cout << i << " " << j << endl;
    }
    return 0;
}
