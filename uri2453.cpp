#include <iostream>
#include <string>

using namespace std;

int main() {
    string mensagem;
    getline(cin, mensagem);

    string decodificada = "";
    for (int i = 0; i < mensagem.length(); i++) {
        if (mensagem[i] == ' ') {
            decodificada += ' ';
        } else {
            decodificada += mensagem[i+1];
            i++;
        }
    }

    cout << decodificada << endl;

    return 0;
}
