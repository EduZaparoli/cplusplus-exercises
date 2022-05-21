#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int X, Y, Z;
    cin >>  X >> Y >> Z;
    int arr[] = {X, Y, Z};
    sort(arr, arr + 3);
    for (int x : arr) {
        cout << x << endl;
    }
    cout << "\n" << X << "\n" << Y << "\n" << Z << endl;
}
