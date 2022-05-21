#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int N, Q;
    while (cin >> N >> Q) {
        int arrN[N], arrQ[Q];
        for (int i = 0; i < N; i++) cin >> arrN[i];
        for (int i = 0; i < Q; i++) cin >> arrQ[i];
        sort(arrN, arrN + N, greater<int>());
        for (int i = 0; i < Q; i++) cout << arrN[arrQ[i] - 1] << endl;
    }
    return 0;
}
