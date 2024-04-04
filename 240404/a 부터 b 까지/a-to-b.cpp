#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << a << " ";

    
    do{
        if(a % 2 == 0){
            a += 3;
            cout << a << " ";
        }
        else{
            a *= 2;
            cout << a << " ";
        }
    }while(a < b);

    return 0;
}