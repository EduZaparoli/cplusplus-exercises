#include <iostream>
#include <conio.h>
#define TAM 10
using namespace std;

struct informacao{
   int inicio;
   int fim;
   int tamanho;
};

struct nodo
{
    int eloAnterior;
    string nome;
    int eloPosterior;
};

struct informacao info; // informações sobre a lista
struct nodo lista[TAM]; // lista encadeada com 10 elementos e 1 nodo cabeça

/* protótipos das funções */
void inicializaLista(); // função para inicializar elementos da lista
void menu();
void inserir(string nome); // função para inserir nome na lista
void excluir(string nome); // função para excluir nome na lista
void mostrar(char creDec); // função para mostrar a lista em ordem crescente ou decrescente
string pedirNome();

int main()
{
    inicializaLista();
    menu();
}

void inicializaLista()
{
    for (int i = 0; i < TAM; i++)
    {
        lista[i].eloAnterior = 0;
        lista[i].eloPosterior = 0;
        lista[i].nome = "";
    }
    info.fim = 0;
    info.inicio = 0
    info.tamanho = 0;
}


void menu()
{
   char op = ' ';
    do
    {
        cout << "1 - Inserir elemento na lista" << endl;
        cout << "2 - Retirar elemento da lista" << endl;
        cout << "3 - Mostrar a lista em ordem crescente" << endl;
        cout << "4 - Mostrar a lista em ordem decrescente" << endl;
        cout << "5 - Encerrar o programa" << endl;
        fflush(stdin); // limpa o buffer do teclado eliminando o \n deixado pelo getchar anterior.
        op = getch();
        switch (op)
        {
        case '1':
            inserir(pedirNome());
            break;
        case '2':
            excluir(pedirNome());
            break;
        case '3':
            mostrar('C');
            break;
        case '4':
            mostrar('D');
            break;
        }
    } while (op != '5');
}


void inserir(string nome){

}

void excluir(string nome){
}

void mostrar(char creDec){

}

string pedirNome(){
    string nome;
    cout << "Informe o nome: ";
    cin >> nome;
    return nome;
}
