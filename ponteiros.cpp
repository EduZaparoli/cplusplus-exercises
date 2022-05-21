#include <iostream>

using namespace std;

int calculoComplexo(int *A){
    cout << A[0] << endl;
    return 0;
}

int main(){
    int y;
    y = 5;
    cout << calculoComplexo(&y);
}