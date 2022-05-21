#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    int N, L, hashSum, aux;
    string str;
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        hashSum = 0;
        cin >> L;
        for (size_t j = 0; j < L; j++)
        {
            aux = 0;
            cin >> str;
            for (auto ch : str)
            {
                hashSum += ((unsigned char)ch - 65) + j + aux++;
            }
        }
        cout << hashSum << "\n";
    }
    return 0;
}