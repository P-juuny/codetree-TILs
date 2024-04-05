#include <iostream>


using namespace std;

int main() {

    int price;
    
    cin >> price;

    if(price >= 3000){
        cout << "book";
    }
    else{
        cout << "mask";
        if(price == 0){
            cout << "no";
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}