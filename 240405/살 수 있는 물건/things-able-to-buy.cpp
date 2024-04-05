#include <iostream>


using namespace std;

int main() {

    int price;
    
    cin >> price;

    if(price >= 3000){
        cout << "book";
    }
    else if(price == 0){
        cout << "no";
    }
    else{
        cout << "mask";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}