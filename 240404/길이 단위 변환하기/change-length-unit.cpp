#include <iostream>

using namespace std;

int main() {

    float a = 30.48;
    int b = 160934;

    cout << fixed;
    cout.precision(1);

    cout << 9.2 << "ft = " << a * 9.2 << "cm" << endl;
    cout << 1.3 << "mi = " << b * 1.3 << "cm";
    
    return 0;
}