//
// Created by Rajaswa on 22-12-2017.

#include <iostream>

using namespace std;

int main() {

    int a[3][3], b[3][3], c[3][3];
    cout << "A matrix" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = i;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "B matrix" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = j;
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    int result = 0;
    int k = 0;
    for (int k = 0; k < 3; k++) {
        for (int (j) = 0; (j) < 3; (j)++) {
            result = 0;
            for (int i = 0; i < 3; i++) {
                result += a[k][i] * b[i][j];
            }
            c[k][j] = result;
        }
    }

    cout << endl << "C matrix" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



