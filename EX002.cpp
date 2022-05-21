#include <iostream>
#include <ctime>
#include <cstdlib> 
#define TAM 20
using namespace std;

int main() 
{
    srand(time(0));
    int arr[TAM], temp;
    for (int index = 0; index < TAM; index++) arr[index] = rand()%1000;
    for (int index = 0; index < TAM; index++) {
        for (int indexJ = index + 1; indexJ <= TAM; indexJ++) {
            if (arr[indexJ] > arr[index]) {
                temp = arr[index];
                arr[index] = arr[indexJ];
                arr[indexJ] = temp;
            }
        }
    }
    for (int index = 0; index < TAM; index++) cout << "A[" << index << "] = " <<  arr[index] << endl;
}