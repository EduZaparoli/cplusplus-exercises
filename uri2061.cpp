#include <iostream>

using namespace std;

int main() {
    int N, M;
    string A;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> A;
        if (A == "fechou") N++;
        else N--;
    }
    cout << N << endl;
    return 0;
}