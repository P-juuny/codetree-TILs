#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s, t, temp;

    getline(cin,s);
    getline(cin,t);

    temp = s;
    s = t;
    t = temp;

    cout << s << endl;
    cout << t;

    return 0;
}