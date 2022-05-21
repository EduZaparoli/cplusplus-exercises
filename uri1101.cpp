#include <iostream>

using namespace std;

int main(){

    int m,n,soma;

    while(m > 0 && n > 0){
        cin >> m >> n;
        if(m > n){
            for(int i=n; i<m+1; i++){
                cout << i << " ";
            }
            cout << "Sum=" << soma << endl;
        }
    }

return 0;
}
