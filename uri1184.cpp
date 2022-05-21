#include <iostream>
#include <iomanip>

using namespace std;

#define linha 12
#define coluna 12

int main(){

    cout << fixed << setprecision(1);

    char C;
    int i, j;
    float M[linha][coluna], soma, media;

    cin >> C;

    for(i=0; i<linha; i++){

        for(j=0; j<coluna; j++){

            cin >> M[i][j];

        }

    }

    for(i=0; i<linha; i++){

        for(j=0; j<coluna; j++){

                if(j<i){

                soma = soma + M[i][j];

            }
        }
    }

    if(C == 'S'){

        cout << soma << endl;

    }

    else if(C == 'M'){

        media = soma / 66.0;

        cout << media << endl;

    }

return 0;
}
