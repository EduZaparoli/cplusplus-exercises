#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) { // lê a quantidade de letras para decifrar
        cin.ignore(); // consome o caractere '\n' após a leitura de n
        for (int i = 0; i < n; i++) {
            string codigo;
            getline(cin, codigo); // lê uma linha contendo o código da letra
            int num_pontos = 0;
            for (char c : codigo) { // percorre cada caractere do código
                if (c == '.') { // se o caractere é um ponto, incrementa o contador
                    num_pontos++;
                } else { // se não, decifra a letra correspondente ao número de pontos
                    cout << (char)('a' + num_pontos - 1); // imprime a letra decifrada
                    num_pontos = 0; // zera o contador para decifrar a próxima letra
                }
            }
            cout << endl; // imprime uma nova linha após decifrar a letra
        }
    }
    return 0;
}
