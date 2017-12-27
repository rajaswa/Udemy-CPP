//
// Created by Rajaswa on 27-12-2017.
//
#include <iostream>

using namespace std;

void variableType(int);

void variableType(string);

void variableType(double);

int i;
string s;
double d;

int main() {

    cout << "enter the test variable: " << endl;
    cin>>i>>s>>d;
    variableType(i);
    variableType(s);
    variableType(d);
}

void variableType(int) {
    cout << i <<" is an integer" << endl;

}

void variableType(string) {
    cout << s << " is a string" << endl;

}

void variableType(double) {
    cout << d <<" is a double" << endl;

}