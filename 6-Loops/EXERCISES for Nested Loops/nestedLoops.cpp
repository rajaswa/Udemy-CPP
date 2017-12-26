//
// Created by Rajaswa on 22-12-2017.
//
#include <iostream>

using namespace std;

int main() {
    int array[3][3];
    int x = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = ++x;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
