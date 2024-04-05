#include <iostream>


using namespace std;

int main() {

    int price;
    
    cin >> price;

    if(price >= 3000){
        cout << "book";
    } else if(price > 0){
        cout << "mask";
    } else
        cout <<"no";
        
    return 0;
}