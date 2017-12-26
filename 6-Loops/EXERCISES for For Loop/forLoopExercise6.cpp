//
// Created by Rajaswa on 22-12-2017.
//

#include <iostream>

using namespace std;

int main() {
    int array[5];
    string variable;
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
        if (array[i] % 2 == 0) {
            variable = "even";
        } else {
            variable = "odd";
        }
        cout << array[i] << " is : " << variable << endl;

    }
    return 0;
}