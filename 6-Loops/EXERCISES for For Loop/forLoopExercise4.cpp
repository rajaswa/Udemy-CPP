//
// Created by Rajaswa on 22-12-2017.
//

#include <iostream>

using namespace std;

int main() {

    int testNum;

    cout << "plz enter the number whose factorial is required : " << endl;
    cin >> testNum;

    int limit = 1;

    for (int i = 1; i <= testNum; i++) {
        limit = i * limit;
        cout << "the factorial for " << i << " is : " << limit << endl;
    }

    return 0;


}