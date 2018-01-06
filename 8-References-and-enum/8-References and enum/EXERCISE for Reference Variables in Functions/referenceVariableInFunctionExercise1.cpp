//
// Created by Rajaswa on 06-01-2018.
//
#include <iostream>

using namespace std;

int setValue(int);

int Value;

int main() {
    cout << "enter the set value : " << endl;

    setValue(Value);

    return Value;


}
int setValue(int) {

    cin >> Value;
    return Value;

}

