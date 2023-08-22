#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
    string tag, texto;
    int valor;

    while (getline(cin, tag)) {
        cin >> valor;
        cin.ignore(); // Ignora o \n deixado pelo cin antes do getline
        getline(cin, texto);

        map<string, int> tags;
        stringstream ss;
        bool dentroTag = false;

        for (int i = 0; i < texto.length(); i++) {
            if (texto[i] == '<') {
                dentroTag = true;
                ss.str("");
            } else if (texto[i] == '>') {
                dentroTag = false;
                string tagAtual = ss.str();
                if (tagAtual.length() > 0 && tagAtual[0] != '/') {
                    if (tags.count(tagAtual) == 0) {
                        tags[tagAtual] = valor++;
                    }
                    ss.str("");
                    ss << tags[tagAtual];
                }
            } else {
                if (dentroTag) {
                    ss << texto[i];
                }
            }
        }

        cout << ss.str() << endl;
    }

    return 0;
}
