#include <iostream>

using namespace std;

int main() {
    
    int a = 5;
    int b = 6;
    int c = 7;
    int temp;
    int temp_1;

    temp = a;
    temp_1 = b;
    a = c;
    b = temp;
    c = temp_1;


    cout << a << endl;
    cout << b << endl;
    cout << c;

    return 0;
}