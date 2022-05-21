#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << fixed << setprecision(5);

    double a,b,media;

    cin >> a;
    cin >> b;

    media = ((a*3.5)+(b*7.5))/11;

    cout << "MEDIA = " << media << endl;

return 0;
}
