//
// Created by Rajaswa on 26-12-2017.
//
#include <iostream>

using namespace std;

void chooseOperation();

void division();

void multiplication();

void subtraction();

void addition();

void exponentiation();

int main() {
    chooseOperation();
}

void chooseOperation() {

    char choice;
    cout << "PLease select the charecter code of the operation you want to perform: " << endl << " + Addition " << endl
         << " - Subtraction " << endl << " * Multiplication " << endl << " / Division " << endl << " ^ Exponential "
         << endl;
    cin >> choice;

    switch (choice) {
        case '+' :
            addition();
            break;
        case '-' :
            subtraction();
            break;
        case '*' :
            multiplication();
            break;
        case '/' :
            division();
            break;
        case '^' :
            exponentiation();
            break;

    }


}

void addition() {
    double a, b;
    cout << "enter the two numbers : " << endl;
    cin >> a >> b;
    cout << "the sum of these two numbers is : " << (a + b) << endl;
}

void subtraction() {

    double a, b;
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the number to be subtracted : " << endl;
    cin >> b;

    cout << "The subtraction of following numbers is : " << (a - b) << endl;
}

void multiplication() {

    double a, b;
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the number to be multiplied : " << endl;
    cin >> b;

    cout << "The multiplication of following numbers is : " << (a * b) << endl;
}

void division() {

    double a, b;
    cout << "enter the number to be dividend : " << endl;
    cin >> a;
    cout << "enter the divisor : " << endl;
    cin >> b;

    cout << "The division of following numbers is : " << (a / b) << endl;
}

void exponentiation() {
    double b, e, bTemp;
    cout << " enter the value of base: " << endl;
    cin >> b;
    cout << " enter the value of exponent: " << endl;
    cin >> e;

    bTemp = b;

    for (; e > 1; e--) {
        b *= bTemp;

    }

    cout << "the value of following exponent is: " << b << endl;
}
