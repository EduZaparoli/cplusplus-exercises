#include <iostream>
#define TAM 5
using namespace std;

struct Automovel
{
    string marca;
    string modelo;
    double valor;
    int frequencia = 0;
};

int searchModel(Automovel arr[], string findModel)
{
    for (int index = 0; index < TAM; index++) if (arr[index].modelo == findModel) return index;
    return -1;
}

void orderStruct(Automovel arr[]) {
    for (int index = 0; index < TAM; index++)
    {
        for (int indexJ = 0; indexJ < index; indexJ++) 
        {
            if (arr[index].frequencia > arr[indexJ].frequencia) 
            {
                Automovel temp = arr[index];
                arr[index] = arr[indexJ];
                arr[indexJ] = temp;
            }
        }
    }
}

struct Automovel arr[TAM];

int main() 
{
    for (int index=0; index<TAM; index++)
    {
        cout << "Marca do Veiculo " << index + 1 << ": ";
        cin >> arr[index].marca;
        cout << "Modelo do Veiculo " << index + 1 << ": ";
        cin >> arr[index].modelo;
        cout << "Valor do Veiculo " << index + 1 << ": ";
        cin >> arr[index].valor;
        cout << endl;
    }
    // for (int index=0; index<TAM; index++) cout << "Carro " << index + 1 << " = [" << arr[index].marca << ", " << arr[index].valor << ", " << arr[index].frequencia << ", " << arr[index].modelo << "]" << endl;
    while (true) {
        string findModelo;
        cout << "Informe o Modelo do Veiculo: ";
        cin >> findModelo;
        if (findModelo == "FIM") break;
        int modeloIndex = searchModel(arr, findModelo);
        if (modeloIndex == -1) cout << "Veiculo Nao Encontrado!" << endl;
        else {
            cout << endl;
            cout << "Veiculo " << modeloIndex << endl;
            cout << "Marca: " << arr[modeloIndex].marca << endl;
            cout << "Valor: " << arr[modeloIndex].valor << endl;
            cout << endl;
            arr[modeloIndex].frequencia += 1;
            orderStruct(arr);
        }
        // for (int index=0; index<TAM; index++) cout << "Veiculo " << index + 1 << " = [" << arr[index].marca << ", " << arr[index].valor << ", " << arr[index].frequencia << ", " << arr[index].modelo << "]" << endl;
    }
}