#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n1,n2,res;
    char opc;

    inicio:

    system("cls");

    cout << "Digite o valor da note 1: " << endl;
    cin >> n1;
    cout << "Digite o valor da note 2: " << endl;
    cin >> n2;

    res = n1+n2;

    if(res >= 60){
        cout << "Aluno Aprovado" << endl;
    }
    else if(res >= 40){
        cout << "Aluno em Recuperação" << endl;
    }
    else{
        cout << "Aluno Reprovado" << endl;
    }

    cout << endl;

    cout << "Digitar outras notas? [s/n]: ";
    cin >> opc;

    cout << endl;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }

return 0;
}
