/* Segunda Avaliação */
/*
Lista duplamente encadeada:
Este programa implementa uma lista duplamente encadeada.
Para a avaliação você deve escrever os códigos das funções desta aplicação.

Os registros devem ser inseridos com alocação dinâmica para cada registro.
Cada registro deve estar ligado com o próximo e com o anterior através de um elo.
A ordenação deve ser pelo nome.
Para exclusão de um registro, deve ser solicitado o nome a ser excluido. Se o nome
informado não existir, deve ser mostrada uma mensagem ao usuário.

Esta tarefa também esta descrita no Moodle em https://ead.upf.br

O desenvolvimento correto das seguintes funções, valem 2 pontos na nota:
void incluir();
void excluir();
void mostrarCrescente();
void mostrarDecrescente();
A alocação correta dos registros vale 2 pontos
*/

#include <iostream>
using namespace std;

struct registro{
    string nome;
    double altura;
    double peso;
    struct registro *eloA;
    struct registro *eloP;
};

#include <iostream>
using namespace std;

char menu();
void incluir(); /* vale 2 pontos na nota */
void excluir();/* vale 2 pontos na nota */
void mostrarCrescente(); /* vale 2 pontos na nota */
void mostrarDecrescente(); /* vale 2 pontos na nota */

int main()
{
    do{
        switch( menu() ){
            case '1': incluir();
                        break;
            case '2': excluir();
                        break;
            case '3': mostrarCrescente();
                        break;
            case '4': mostrarDecrescente();
                        break;
            case '0': return 0;
            default: cout << endl << "Opcao invalida!" << endl;
        }
    }while(1);
}

char menu(){
    char opcao;
    cout << endl;
    cout << "Lista duplamente encadeada." << endl << endl;
    cout << "Escolha uma opção:" <<endl;
    cout << "1 - Incluir um registro na lista" << endl;
    cout << "2 - Excluir um registro da lista" << endl;
    cout << "3 - Mostrar a lista em ordem crescente" << endl;
    cout << "4 - Mostrar a lista em ordem descrescente" << endl;
    cout << "0 - Encerrar o programa" << endl;
    cin >> opcao;
    return opcao;
}

void incluir(){
}

void excluir(){
}

void mostrarCrescente(){
}

void mostrarDecrescente(){
}

