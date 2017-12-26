//
// Created by Rajaswa on 22-12-2017.
//
#include <iostream>

using namespace std;

int main() {
    int pinCode1;
    int pinCode2;
    int tries = 5;
    cout << "enter the PIN code : " << endl;
    cin >> pinCode1;

    do {
        cout << "Re-Enter the PIN code (" << tries << ") tries left : " << endl;
        cin >> pinCode2;

        tries--;
    } while ((pinCode1 != pinCode2) && (tries > 0));

    if (pinCode1 == pinCode2) { cout << "PIN re-entered correctly !!" << endl; }
    else { cout << "You Have exhausted the alloted number of tries ! : " << endl; }


    return 0;
}
