#include <iostream>
#include <string>

using namespace std;

int main() {
    string criptografia = "@&!*#";
    string linha;

    while (getline(cin, linha)) {
        for (char c : linha) {
            if (c == ' ') {
                cout << " ";
            } else {
                int pos = criptografia.find(c);
                if (pos != string::npos) {
                    switch (pos) {
                        case 0:
                            cout << 'a';
                            break;
                        case 1:
                            cout << 'e';
                            break;
                        case 2:
                            cout << 'i';
                            break;
                        case 3:
                            cout << 'o';
                            break;
                        case 4:
                            cout << 'u';
                            break;
                    }
                } else {
                    cout << c;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
