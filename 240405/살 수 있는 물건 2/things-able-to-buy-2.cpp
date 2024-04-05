#include <iostream>

using namespace std;

int main() {

    int price;

    cin >> price;

    if(price >= 3000){
        cout << "book";
    }
    else if(price >= 1000){
        cout << "mask";
    }
    else if(price >= 500){
        cout << "pen";
    }
    else{
        cout << "no";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}