//
// Created by Rajaswa on 22-12-2017.
//

#include <iostream>

using namespace std;

int main() {
    int pinCode1;
    int pinCode2;

    cout << "enter the pin code here : " << endl;
    cin >> pinCode1;

    while (pinCode2 != pinCode1) {
        cout << "please enter the correct pin code again : ";
        cin >> pinCode2;
    }

    cout << "PIN : " << pinCode1 << endl << "CHECKPIN : " << pinCode2 << endl;

    return 0;
}