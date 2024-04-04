#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    int i = 0;

    cin >> a >> b >> c;

    if(a > b){
        i = a;
    }
    else{
        i = b;
    }

    if(i > c){
        cout << i;
    }
    else{
        cout << c;
    }


    return 0;
}