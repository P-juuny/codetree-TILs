#include <iostream>

using namespace std;

int main() {

    int a, b, c, tmp;

    cin >> a >> b >> c;

    tmp = a;

    if(tmp < b){
        tmp = b;
        if(tmp > c)
            tmp = c;
    }

    cout << tmp;
    

    
    return 0;
}