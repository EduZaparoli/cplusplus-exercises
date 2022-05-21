#include <iostream>
#define TAM 20
using namespace std;

int main() 
{
    int arr[TAM];
    int maior = 0;
    int menor = 2147483647;
    for (int index = 0; index < TAM; index++) {
        cout << "Informe A[" << index << "]: ";
        cin >> arr[index];
        if (arr[index] <= 0) 
        {
            cout << "Erro! Valor deve ser maior que 0" << endl;
            index = index - 1;
        } else {
            if (arr[index] <= menor) menor = arr[index];
            if (arr[index] >= maior) maior = arr[index];
        }
    }
    // for (int index = 0; index < TAM; index++) cout << "A[" << index << "] = " <<  arr[index] << endl;
    cout << endl;
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
}