#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>  
using namespace std;

struct Registro {
    string nomeRegistro;
    double alturaRegistro;
    double pesoRegistro;
    struct Registro *eloA;
    struct Registro *eloP;
};

Registro* gerarRegistro(
    string nomeRegistro, 
    double alturaRegistro, 
    double pesoRegistro
);
char mostraMenu();
void excluirRegistro();
void inserirRegistro();
void mostrarCrescente();
void mostrarDecrescente();

Registro *head = NULL, *tail = NULL;

int main() {
    do {
        system("CLS");
        switch (mostraMenu())
        {
            case '1':
                inserirRegistro();
                system("PAUSE");
                break;
            case '2':   
                excluirRegistro();
                break;
            case '3':   
                mostrarCrescente();
                break;
            case '4':   
                mostrarDecrescente();
                break;
            case '0': 
                return 0;
            default: 
                cout << "Opcao Invalida!" << endl;
                system("PAUSE");
        }
    } while (true);
}

Registro* gerarRegistro(
    string nomeRegistro, 
    double alturaRegistro, 
    double pesoRegistro
) {
    Registro *novoRegistro;
    novoRegistro = new Registro();
    novoRegistro -> nomeRegistro = nomeRegistro;
    novoRegistro -> alturaRegistro = alturaRegistro;
    novoRegistro -> pesoRegistro = pesoRegistro;
    novoRegistro -> eloP = NULL;
    novoRegistro -> eloA = NULL;
    return novoRegistro;
}

char mostraMenu() {
    char userInput;
    cout << endl;
    cout << "### Lista Duplamente Encadeada ###" << endl << endl;
    cout << "Escolha uma Opcao:" <<endl;
    cout << "1 - Incluir um Registro na Lista" << endl;
    cout << "2 - Excluir um Registro da Lista" << endl;
    cout << "3 - Mostrar a Lista em Ordem Crescente" << endl;
    cout << "4 - Mostrar a Lista em Ordem Decrescente" << endl;
    cout << "0 - Encerrar o Programa" << endl;
    cin >> userInput;
    return userInput;
}

void inserirRegistro() {
    string nomeRegistro;
    double alturaRegistro;
    double pesoRegistro;
    cout << "Informe o Nome: ";
    cin >> nomeRegistro;
    cout << "Informe a Altura: ";
    cin >> alturaRegistro;
    cout << "Informe o Peso: ";
    cin >> pesoRegistro;
    Registro *novoRegistro = gerarRegistro(
        nomeRegistro,
        alturaRegistro,
        pesoRegistro
    );
    if (head == NULL) {
        head = novoRegistro;
        tail = novoRegistro;
        head -> eloA = NULL;
        return;
    }
    if ((novoRegistro -> nomeRegistro) < (head -> nomeRegistro)) {
        novoRegistro -> eloA = NULL;
        head -> eloA = novoRegistro;
        novoRegistro -> eloP = head;
        head = novoRegistro;
        return;
    }
    if ((novoRegistro -> nomeRegistro) > (tail -> nomeRegistro)) {
        novoRegistro -> eloA = tail;
        tail -> eloP = novoRegistro;
        tail = novoRegistro;
        return;
    }
    Registro *temp = head -> eloP;
    while ((temp -> nomeRegistro) < (novoRegistro -> nomeRegistro)) {
        temp = temp -> eloP;
    }
    (temp -> eloA) -> eloP = novoRegistro;
    novoRegistro -> eloA = temp -> eloA;
    temp -> eloA = novoRegistro;
    novoRegistro -> eloP = temp;
}

void excluirRegistro() {
    if (head == NULL) {
        cout << "Nao ha Elementos na Lista!" << endl;
    } else {
        string inputUser;
        cout << "Informe o Nome a ser Removido: ";
        cin >> inputUser;
        int indexRegistro = 0, achouUsuario = 0;
        Registro *myList;
        myList = head;
        Registro *temp = new Registro();
        while (1) {
            if (myList -> nomeRegistro == inputUser) {
                achouUsuario = 1;
                temp = myList;
                break;
            }
            if (myList == tail) {
                break;
            }
            indexRegistro++;
            myList = myList -> eloP;
        }
        if (achouUsuario == 1) {
            if (indexRegistro == 0) {
                if (head -> eloP == NULL) {
                    head = NULL;
                    tail = NULL;
                } else {
                    head = head -> eloP;
                    head -> eloA = NULL;
                }
            } else {
                Registro *tempAnother = new Registro();
                tempAnother = temp -> eloA;
                tempAnother -> eloP = temp -> eloP;
                if (temp -> eloP == NULL) {
                    tail = tempAnother;
                } else {
                    temp -> eloP -> eloA = tempAnother;
                }
                free(temp);
            }   
            cout << "Usuario Deletado!" << endl;      
        } else {
            cout << "Usuario nao Encontrado!" << endl;
        }
    }
    system("PAUSE");
}

void mostrarCrescente() {
    Registro *myList;
    myList = head;
    while (1) {
        if (head == NULL || tail == NULL) {
            cout << "Nao ha Elementos na Lista!" << endl;
            break;
        }
        cout << "[" << myList -> nomeRegistro << ", " << myList -> alturaRegistro << ", " << myList -> pesoRegistro << "]" << endl;
        if (myList == tail) {
            break;
        }
        myList = myList -> eloP;
    }
    system("PAUSE");
}

void mostrarDecrescente() {
    Registro *myList;
    myList = tail;
    while (1) {
        if (head == NULL || tail == NULL) {
            cout << "Nao ha Elementos na Lista!" << endl;
            break;
        }
        cout << "[" << myList -> nomeRegistro << ", " << myList -> alturaRegistro << ", " << myList -> pesoRegistro << "]" << endl;
        if (myList -> eloA == NULL) {
            break;
        }
        myList = myList -> eloA;
    }
    system("PAUSE");
}         