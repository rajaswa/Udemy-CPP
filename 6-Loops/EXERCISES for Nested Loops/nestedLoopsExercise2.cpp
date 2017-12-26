//
// Created by Rajaswa on 23-12-2017.
//

#include<iostream>

using namespace std;

int main() {
    int a, b;
    int array[3][3];
    int x = 1;
    //assigning values to matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = x;
            x++;
        }
    }


    //printing out original matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    //replacing with x
    for (int r = 0; r < 9; r++) {
        cout << "enter the coordinates for X : " << endl;
        cin >> a >> b;
        array[a - 1][b - 1] = 0;


        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (array[i][j] == 0) {
                    cout << 'X' << " ";
                } else cout << array[i][j] << " ";
            }
            cout << endl;
        }
    }
}

