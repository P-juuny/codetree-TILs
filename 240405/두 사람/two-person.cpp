#include <iostream>

using namespace std;

int main() {
    struct Person{
        char gender;
        int age;
    };


    Person person1;
    Person person2;

    cin >> person1.age >> person1.gender;
    cin >> person2.age >> person2.gender;

    if(person1.gender == 'M' && person1.age >= 19 || person2.gender == 'M' && person2.age >= 19 ){
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}