#include <iostream>

#define TOTAL 10

using namespace std;

void zeraBaldes();
void lerValores();
void alocarValoresNosBaldes(int multiplicador);
void retornarValores();
int tamanhoDoValor(int valor);
void mostrarValores();

int numeros[TOTAL];
int baldes[10][TOTAL+1];
int multiplicador = 1;
int maior = -2147483648;
int digitosDoMaior;

int main(){
   lerValores();
   for(int passos=0; passos < digitosDoMaior; passos++){
      zeraBaldes();
      alocarValoresNosBaldes(multiplicador);
      retornarValores();
      multiplicador *= 10;
    }
    mostrarValores();
}

void zeraBaldes(){
  for(int b=0;b<10;b++){
      baldes[b][0]=0;
  }
}

void lerValores(){
    cout << "Informe "<< TOTAL << " valores inteiros" << endl;
    for(int i=0;i < TOTAL; i++){
        cout << (i+1) << "o. numero: ";
        cin >> numeros[i];
        if(numeros[i] > maior) maior = numeros[i];
    }
    digitosDoMaior = tamanhoDoValor(maior);
}

void mostrarValores(){
   cout << "Estes são os valores ordenados" << endl;
   for(int i=0;i < TOTAL; i++){
       cout << (i+1) << "o. valor = " << numeros[i] << endl;
   }
}

void alocarValoresNosBaldes(int multiplicador){
    int balde;
    int coluna;
   cout << "...log...|multiplicador[" << multiplicador << "]" << endl;
    for(int i=0;i < TOTAL; i++){
        balde = (numeros[i] / multiplicador) % 10;
        baldes[balde][0] += 1;
        coluna = baldes[balde][0];
        baldes[balde][coluna] = numeros[i];
    }
}

void retornarValores(){
     int i =0;
    for(int linha = 0; linha < 10; linha++){
        for(int coluna=1;coluna <= baldes[linha][0]; coluna++ ){
            numeros[i++] = baldes[linha][coluna];
        }
    }
}

int tamanhoDoValor(int valor){
    if(valor < 10)
       return 1;
    else
      if(valor < 100)
        return 2;
      else
        if(valor < 1000)
          return 3;
        else
          if(valor < 10000)
            return 4;
          else
            if(valor < 100000)
              return 5;
            else
              if(valor < 1000000)
                return 6;
              else
                if(valor < 10000000)
                  return 7;
                else
                  if(valor < 100000000)
                    return 8;
                  else
                   if(valor < 1000000000)
                     return 9;
                    else
                      return 10;
}
