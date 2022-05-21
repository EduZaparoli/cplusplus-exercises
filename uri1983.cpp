#include <iostream>

using namespace std;
 
int main() {
    int N, Matricula, maiorMatricula;
    double Nota, maiorNota = 7.9;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Matricula >> Nota;
        if (Nota > maiorNota) {
            maiorMatricula = Matricula;
            maiorNota = Nota;
        }
    }
    if (maiorNota < 8) cout << "Minimum note not reached" << endl;
    else cout << maiorMatricula << endl;
    return 0;
}