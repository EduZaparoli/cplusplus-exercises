#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    n = n * 4 + 1;

    for(int i=1; i<n; i+=4){
        cout << i << " " <<  i+1 << " " << i+2 << " " << "PUM" << endl;
    }

    return 0;
}
