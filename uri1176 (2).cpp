#include <iostream>

using namespace std;

int main() {
    ///Sequencia de Fibonacci
    // 0 e 1 são os 2 primeiros termos.
    // Cada termo seguinte é a soma dos dois anteriores.

    /** 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    Opção 1: uso de repetição
    */
    int NCasos, penultimo=0, ultimo=1, proximo, N;
    unsigned long long int fib [61];
    fib[0] = 0;
    fib[1] = 1;
    for (int i=2; i<=60; i++) { /// pre-calculamos todos os resultados
        fib [i] = fib [ i-1] + fib [ i - 2];
    }

    cin >> NCasos;

    while (NCasos--) {
        cin >> N;
        cout << "Fib("<< N << ") = " << fib [N] << endl;

    }

    return 0;
}
