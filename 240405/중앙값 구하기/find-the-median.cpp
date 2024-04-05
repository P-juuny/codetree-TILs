#include <iostream>

using namespace std;

int main() {

    int a, b, c, tmp;

    cin >> a >> b >> c;
     
    if(a > c){
        if(b < a){
            tmp = b;
        }
        else{
            tmp = a;
        }
    }
    else{
        if(b < a){
            tmp = a;
        }
        else{
            tmp = b;
        }
    }


    cout << tmp;
    

    
    return 0;
}