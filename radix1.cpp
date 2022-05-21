#include <iostream>
#include <string.h>
#define QTD 5

using namespace std;

string numeros[QTD];
int n[QTD];
string baldes[10][QTD];
int numMaior;
int tamMaior;

string zero(int num, int qtd){

    string s;

}

int tamanhoDoNumero(int num){

    if(num < 10){
        return 1;
    }
    else if(num < 100){
        return 2;
    }
    else if(num < 1000){
        return 3;
    }
    else if(num < 10000){
        return 4;
    }
    else{
        return 5;
    }
}

void maior(){

    numMaior = n[0];
    for(int i=1; i<QTD; i++){

        if(n[i] > numMaior) numMaior = n[i];
    }
    tamMaior = tamanhoDoNumero(numMaior);

}

void iniciarBaldes(){

    for(int b=0; b<10; b++){

        for(int i=0; i<QTD; i++){

            baldes [b][i]=-1;
        }
    }

}


void entradaDeDados(){

    cout << "Informe " << QTD << " numeros inteiros positivos " << endl;
    for(int i=0; i<QTD; i++){

        cout << (i+1) << " o. ";
        cin >> n[i];
    }
}

void mostrar(){

    int v;
    for(int i=0; i<QTD; i++){
        cout << i << "o. = " << n[i] << " | tamanho" << tamanhoDoNumero(n[i]) << endl;
    }
    cout << "maior = " << numMaior << endl;
}

int main(){

    iniciarBaldes();
    entradaDeDados();
    maior();
    mostrar();
}
