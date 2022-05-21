


/*
    Infelizmente não consegui fazer com que o usuário digitasse os valores
    E nem que solicitasse o modelo repetidas vezes

    sorry kkkk :)
*/


#include <iostream>
#include <iomanip>

using namespace std;

struct automovel{

    string marca;
    string modelo;
    double valor;
    int freq;


};


struct automovel carro[5] = {

    {"Nissan", "Sentra", 60000.00, 120},
    {"Volkswagem", "Fox", 20000.00, 120},
    {"Fiat", "Uno", 12000.00, 120},
    {"Toyota", "Corolla", 70000.00, 120},
    {"Hyundai", "Hb20", 30000.00, 120},

};

int pesquisaSequencial(string m);

int main(){

    cout << fixed << setprecision(2);

    int indice;
    string modelo;

    cout << "Informe o modelo do carro: ";
    cin >> modelo;

    indice = pesquisaSequencial(modelo);
    if(indice < 5){
        cout << "A marca do modelo e: " << carro[indice].marca << endl;
        cout << "O valor do modelo e: R$ " << carro[indice].valor << endl;
    }
    else{
        cout << "O modelo informado nao existe!" << endl;
    }
}

int pesquisaSequencial(string m){

    int i;
    for(i=0; i<5; i++){

        if(m == carro[i].modelo){
            return i;
        }

    }

    return i;
}
