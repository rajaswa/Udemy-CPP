//
// Created by Rajaswa on 01-01-2018.
//
#include <iostream>

using namespace std;


int main() {
    string name = "rajaswa";

    string &raj = name;
    string &raju = name;
    string &rajaswa = name;

    cout << name << " " << &name << endl << raj << " " << &raj << endl << rajaswa << " " << &rajaswa << endl;


}
