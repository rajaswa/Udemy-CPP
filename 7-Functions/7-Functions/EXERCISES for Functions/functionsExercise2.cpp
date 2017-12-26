//
// Created by Rajaswa on 25-12-2017.
//
#include <iostream>

using namespace std;

void subtraction();

int main() {
    subtraction();
}

void subtraction() {

    double a, b;
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the number to be subtracted : " << endl;
    cin >> b;

    cout << "The subtraction of following numbers is : " << (a - b) << endl;
}