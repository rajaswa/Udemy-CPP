//
// Created by Rajaswa on 22-12-2017.
//

#include <iostream>

using namespace std;

int main() {
    int input;
    cout << "please enter the input : " << endl;
    cin >> input;

    cout << input << endl;

    for (int i = 0; i < 100; i++) {
        cout << i + input << endl;
    }

    return 0;

}