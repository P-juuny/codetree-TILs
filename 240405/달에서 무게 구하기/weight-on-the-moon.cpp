#include <iostream>

using namespace std;

int main() {

    int weight = 13;
    float gravity = 0.165;
    float mult = weight * gravity;

    cout << fixed;
    cout.precision(6);

    cout << weight << " * " << gravity << " = " << mult;
    
    return 0;
}