#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << a << " ";

    for(int i = a; i < b; i++){
        if(a < b){
            if(a % 2 == 0){
                a += 3;
                cout << a << " ";
            }
            else{
                a *= 2;
                cout << a << " ";
            }
        }
        else
            break;
    }

    return 0;
}