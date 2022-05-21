#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;


int main () {
   freopen("c.in", "r", stdin);
   cout << fixed << setprecision(1);
   for (int i=1; i<=27; i+=2) {
      for (int j=101-i; j>97-i; j--) {
          cout << i << " " << j << endl;
      }
   }
   return 0;
}
