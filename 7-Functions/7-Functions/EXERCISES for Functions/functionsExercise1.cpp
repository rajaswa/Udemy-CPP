//
// Created by Rajaswa on 25-12-2017.
//
#include <iostream>

using namespace std;

double addition();


int main() {
    addition();

}


double addition() {
    double a, b;
    cout << "enter the two numbers : " << endl;
    cin >> a >> b;
    cout << "the sum of these two numbers is : " << (a + b) << endl;
}

