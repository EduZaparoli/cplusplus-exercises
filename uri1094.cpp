#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;
    float percC, percR, percS, qtd, contC=0, contR=0, contS=0, contT=0;
    char tipo;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> qtd >> tipo;
        contT += qtd;
        if(tipo == 'C'){
            contC += qtd;
        }
        else if(tipo == 'R'){
            contR += qtd;
        }
        else{
            contS += qtd;
        }
    }

    percC = (contC / contT) * 100;
    percR = (contR / contT) * 100;
    percS = (contS / contT) * 100;

    cout << "Total: " << contT << " cobaias" << endl;
    cout << "Total de coelhos: " << contC << endl;
    cout << "Total de ratos: " << contR << endl;
    cout << "Total de sapos: " << contS << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << percC << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << percR << " %" <<  endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << percS << " %" << endl;

return 0;
}
