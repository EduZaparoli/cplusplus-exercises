#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Registro {
    string nome;
    double altura;
    double peso;
    struct Registro *eloAnterior;
    struct Registro *eloPosterior;
};

char menu();
void excluir();
void incluir();
void mostrarCrescente();
void mostrarDecrescente();

Registro* gerarRegistro(
    string nome,
    double altura,
    double peso
);

Registro *comeco = NULL, *fim = NULL;

int main() {
    do {
        system("cls");
        switch (menu())
        {
            case '1':
                incluir();
                system("pause");
                break;
            case '2':
                excluir();
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
                system("pause");
        }
    } while (true);
}

Registro* gerarRegistro(
    string nome,
    double altura,
    double peso
) {
    Registro *novoRegistro;
    novoRegistro = new Registro();
    novoRegistro -> nome = nome;
    novoRegistro -> altura = altura;
    novoRegistro -> peso = peso;
    novoRegistro -> eloPosterior = NULL;
    novoRegistro -> eloAnterior = NULL;
    return novoRegistro;
}

char menu() {
    char opcao;
    cout << endl;
    cout << "Lista Duplamente Encadeada" << endl << endl;
    cout << "Escolha uma Opcao:" << endl;
    cout << "1 - Incluir um Registro na Lista" << endl;
    cout << "2 - Excluir um Registro da Lista" << endl;
    cout << "3 - Mostrar a Lista em Ordem Crescente" << endl;
    cout << "4 - Mostrar a Lista em Ordem Decrescente" << endl;
    cout << "0 - Encerrar o Programa" << endl;
    cout << endl;
    cin >> opcao;
    cout << endl;
    return opcao;
}

void incluir() {
    string nome;
    double altura;
    double peso;
    cout << "Informe o Nome: ";
    cin >> nome;
    cout << "Informe a Altura: ";
    cin >> altura;
    cout << "Informe o Peso: ";
    cin >> peso;

    Registro *novoRegistro = gerarRegistro(nome, altura, peso);

    if (comeco == NULL) {
        comeco = novoRegistro;
        fim = novoRegistro;
        comeco -> eloAnterior = NULL;
        return;
    }
        if ((novoRegistro -> nome) < (comeco -> nome)) {
            novoRegistro -> eloAnterior = NULL;
            comeco -> eloAnterior = novoRegistro;
            novoRegistro -> eloPosterior = comeco;
            comeco = novoRegistro;
            return;
        }
            if ((novoRegistro -> nome) > (fim -> nome)) {
                novoRegistro -> eloAnterior = fim;
                fim -> eloPosterior = novoRegistro;
                fim = novoRegistro;
                return;
            }
    Registro *temp = comeco -> eloPosterior;
    while ((temp -> nome) < (novoRegistro -> nome)) {
        temp = temp -> eloPosterior;
    }
    (temp -> eloAnterior) -> eloPosterior = novoRegistro;
    novoRegistro -> eloAnterior = temp -> eloAnterior;
    temp -> eloAnterior = novoRegistro;
    novoRegistro -> eloPosterior = temp;
}

void excluir() {
    if (comeco == NULL) {
        cout << "Nao ha Elementos na Lista!" << endl;
        cout << endl;
    }
    else {
        string excluirnome;
        cout << "Informe o Nome a ser Removido: ";
        cin >> excluirnome;
        int indexRegistro = 0, Usuario = 0;
        Registro *lista;
        lista = comeco;
        Registro *temp = new Registro();
        while (1) {
            if (lista -> nome == excluirnome) {
                Usuario = 1;
                temp = lista;
                break;
            }
                if (lista == fim) {
                    break;
                }
            indexRegistro++;
            lista = lista -> eloPosterior;
        }
        if (Usuario == 1) {
            if (indexRegistro == 0) {
                if (comeco -> eloPosterior == NULL) {
                    comeco = NULL;
                    fim = NULL;
                }
                else {
                    comeco = comeco -> eloPosterior;
                    comeco -> eloAnterior = NULL;
                }
            }
            else {
                Registro *tempAnother = new Registro();
                tempAnother = temp -> eloAnterior;
                tempAnother -> eloPosterior = temp -> eloPosterior;
                if (temp -> eloPosterior == NULL) {
                    fim = tempAnother;
                }
                else {
                    temp -> eloPosterior -> eloAnterior = tempAnother;
                }
                free(temp);
            }
            cout << "Usuario Deletado!" << endl;
        }
        else {
            cout << "Usuario nao Encontrado!" << endl;
        }
    }
    system("pause");
}

void mostrarCrescente() {
    Registro *lista;
    lista = comeco;
    while (1) {
        if (comeco == NULL || fim == NULL) {
            cout << "Nao ha Elementos na Lista!" << endl;
            cout << endl;
            break;
        }
        cout << "Nome: " << lista -> nome << endl;
        cout << "Altura: " << lista -> altura << endl;
        cout << "Peso: " << lista -> peso << endl;
        cout << endl;
        if (lista == fim) {
            break;
        }
        lista = lista -> eloPosterior;
    }
    system("pause");
}

void mostrarDecrescente() {
    Registro *lista;
    lista = fim;
    while (1) {
        if (comeco == NULL || fim == NULL) {
            cout << "Nao ha Elementos na Lista!" << endl;
            cout << endl;
            break;
        }
        cout << "Nome: " << lista -> nome << endl;
        cout << "Altura: " << lista -> altura << endl;
        cout << "Peso: " << lista -> peso << endl;
        cout << endl;
        if (lista -> eloAnterior == NULL) {
            break;
        }
        lista = lista -> eloAnterior;
    }
    system("pause");
}
