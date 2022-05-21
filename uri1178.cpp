#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(4);

    int n[100];
    int x, i;

    cin >> n[0];

    for(i=0; i<99; i++){
        cout << "N[" << i << "] = " << n[0] << endl;
    }

return 0;
}
