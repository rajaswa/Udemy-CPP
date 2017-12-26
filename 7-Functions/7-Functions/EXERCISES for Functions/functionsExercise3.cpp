//
// Created by Rajaswa on 25-12-2017.
//
#include <iostream>

using namespace std;

void multiplication();

int main() {
    multiplication();
}

void multiplication() {

    double a, b;
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the number to be multiplied : " << endl;
    cin >> b;

    cout << "The multiplication of following numbers is : " << (a * b) << endl;
}
