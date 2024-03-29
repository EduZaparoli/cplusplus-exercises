#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) { // l� a quantidade de letras para decifrar
        cin.ignore(); // consome o caractere '\n' ap�s a leitura de n
        for (int i = 0; i < n; i++) {
            string codigo;
            getline(cin, codigo); // l� uma linha contendo o c�digo da letra
            int num_pontos = 0;
            for (char c : codigo) { // percorre cada caractere do c�digo
                if (c == '.') { // se o caractere � um ponto, incrementa o contador
                    num_pontos++;
                } else { // se n�o, decifra a letra correspondente ao n�mero de pontos
                    cout << (char)('a' + num_pontos - 1); // imprime a letra decifrada
                    num_pontos = 0; // zera o contador para decifrar a pr�xima letra
                }
            }
            cout << endl; // imprime uma nova linha ap�s decifrar a letra
        }
    }
    return 0;
}
