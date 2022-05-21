#include <iostream>

using namespace std;

int main(){

    int x;
    int y;

    while (x != y){
        
        cin >> x;
        cin >> y;

        if (x > y)
        {
            cout << "Decrescente" << endl;
        }
        else if (x == y)
        {
            return 0;
        }
        
        else{
            cout << "Crescente" << endl;
        }
        

    }
    
    return 0;
}