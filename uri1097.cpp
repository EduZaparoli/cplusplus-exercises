#include <iostream>

using namespace std;

int main(){

    for(int i = 0; i<=9; i=i + 1){
        for(int j = i+6; j>=i+4; j=j-1){
            cout << "I=" << i << " J=" << j << endl;
        }
    }

return 0;
}
