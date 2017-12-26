//
// Created by Rajaswa on 25-12-2017.
//
#include <iostream>

using namespace std;

void division();

int main() {
    division();
}

void division() {

    double a, b;
    cout << "enter the number to be dividend : " << endl;
    cin >> a;
    cout << "enter the divisor : " << endl;
    cin >> b;

    cout << "The division of following numbers is : " << (a / b) << endl;
}

