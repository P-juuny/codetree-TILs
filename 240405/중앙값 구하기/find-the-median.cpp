#include <iostream>

using namespace std;

int main() {

    int a, b, c, tmp;

    cin >> a >> b >> c;

    if(a < b){
        if(b < c){
            cout << b;
        }
        if(b > c){
            cout << c;
        }
    }
    else{
        if(b < c){
            if(a > c){
                cout << c;
            }
            else{
                cout << a;
            }
        }
        else{
            cout << b;
        }
    }
    
    return 0;
}