#include <iostream>

using namespace std;

int main(){
    int x;

    cin >> x;

    for(int i = x; i<=x+11; i++){
        if(i%2 != 0)
            cout << i << "\n";
    }
    return 0;
}
