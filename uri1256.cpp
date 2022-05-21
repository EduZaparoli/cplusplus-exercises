#include <iostream>
#include <list>

using namespace std;

int main()
{
    int N, M, C, num;
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        cin >> M >> C;
        list<int> hashList[M];
        for (size_t i = 0; i < C; i++)
        {
            cin >> num;
            hashList[num % M].push_back(num);
        }
        for (size_t j = 0; j < M; j++)
        {
            cout << j << " -> ";
            if (hashList[j].size() != 0)
            {
                for (auto it = hashList[j].begin(); it != hashList[j].end(); it++)
                {
                    cout << *it << " -> ";
                }
            }
            cout << "\\\n";
        }
        if (i < N - 1) {
            cout << "\n";
        }
    }
    return 0;
}