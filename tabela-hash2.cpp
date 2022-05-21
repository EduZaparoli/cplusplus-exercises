#include <iostream>
#include <vector>

using namespace std;

vector<int> tabela;

int funcaoHash(int chave){

return chave % tabela.size();

}

void inserir(int t[], int valor){
    int id = funcaoHash(int valor);
    while(t[id] != 0){
        id = funcaoHash(id + 1);
    }
    t[id] = valor;
}

int busca(int t[], int chave){

    int id = funcaoHash(chave);
    while(t[id] != 0){
        if(t[id] == chave){
            return t[id];
        }else{
            id = funcaoHash(id + 1);
        }
    }
    return 0;

}

void imprimir(int t[]){

    for(int i=0; i<tabela.size(); i++){
        cout << i << t[i] << endl;
    }

}

int main(){

    for(int i=0; i<tabela.size(); i++){
        tabela[i] = 0;
    }

    int opcao, valor, retorno;

    while(true){
        cout << "0 - Sair / 1 - inserir / 2 - buscar / 3 - imprimir" << endl;
        cin >> opcao;

        switch(opcao){
        case 1:
            cout << "Qual valor deseja inserir? ";
            cin >> valor;
            inserir(tabela, valor);
            break;
        case 2:
            cout << "Qual valor deseja buscar? ";
            cin >> valor;
            retorno = busca(tabela,valor);
            if(retorno != 0){
                cout << "Valor encontrado: " << retorno << endl;
            }else{
                cout << "Valor nao encontrado" << endl;
            }
            break;
        case 3:
            imprimir(tabela);
            break;
        }
    }

return 0;
}
