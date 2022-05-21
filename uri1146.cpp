#include <iostream>

using namespace std;

int main() {

    int n;

    while(true){
        cin >> n;

        for(int i=1; i<=n; i++){
            cout << i << " ";
        }
        cout << endl;

        if(n == 0){
            break;
        }
    }

    return 0;
}
