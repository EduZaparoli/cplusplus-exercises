#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout<< fixed <<setprecision(1);

    double soma=0, M[20][20];

    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            cin>>M[i][j];
        }
    }
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(i+j==19)

            cout << M[i][j] << endl;
        }
    }


return 0;
}
