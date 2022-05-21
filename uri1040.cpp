#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);

    float n1, n2, n3, n4, media, notaex;

    cin >> n1 >> n2 >> n3 >> n4;

    media = (((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10);

    if(media >= 7.0){
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else if(media < 5.0){
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    }
    else if(media >= 5.0 and media <= 6.9){
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cin >> notaex;
        cout << "Nota do exame: " << notaex << endl;
        media = (notaex + media) / 2;
        if(media >= 5.0){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << media << endl;
        }
        else if(media <= 4.9){
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << media << endl;
        }
    }

    return 0;
}
