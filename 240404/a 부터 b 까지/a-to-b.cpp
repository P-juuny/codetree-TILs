#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << a << " ";

    for(int i = a; i < b; i++){
        if(a % 2 == 0){
            a += 3;
            if(a <= b)
                cout << a << " ";
        }
        else{
            a *= 2;
            if(a <= b)
                cout << a << " ";
        }
    }

    return 0;
}