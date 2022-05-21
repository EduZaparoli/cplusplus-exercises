#include <iostream>

using namespace std;

struct nodo{

    int eloanterior;
    string nome;
    int eloposterior;

};

struct nodo lista[11];

void inserir();
void excluir();
void mostrar(char credec);
string pedirNome();

int main(){

    int op;

    do{
        cout << "1 - Inserir elemento na lista" << endl;
        cout << "2 - Retirar elemento da lista" << endl;
        cout << "3 - Mostrar a lista em ordem crescente" << endl;
        cout << "4 - Mostrar a lista em ordem decrescente" << endl;
        cout << "5 - Encerrar o programa" << endl;

        cin >> op;

        switch (op)
        {
        case 1: inserir( pedirNome() ); break;
        case 2: excluir(); break;
        case 3: mostrar('C'); break;
        case 4: mostrar('D'); break;
        }

    }while(op != 5);
    
}

void inserir(){

    

}

void mostrar(char credec){



}