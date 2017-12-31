//
// Created by Rajaswa on 31-12-2017.
//
#include <iostream>

using namespace std;

double a, b, c, d, e;

double addition(double, double);

double addition(double, double, double);

double addition(double, double, double, double);

double addition(double, double, double, double, double);


int main() {
    int number;
    cout << "enter the number of terms you want to add: " << endl;
    cin >> number;

    switch (number) {

        case 2: {
            cout << "enter the two numbers : " << endl;
            cin >> a >> b;
            addition(a, b);

        }
            break;
        case 3: {
            cout << "enter the three numbers : " << endl;
            cin >> a >> b >> c;
            addition(a, b, c);
        }
            break;
        case 4: {
            cout << "enter the four numbers : " << endl;
            cin >> a >> b >> c >> d;
            addition(a, b, c, d);
        }
            break;
        case 5: {
            cout << "enter the five numbers : " << endl;
            cin >> a >> b >> c >> d >> e;
            addition(a, b, c, d, e);
        }
        default: {
            cout << "enter 2-5 only, restart program" << endl;
        }

    }

}

double addition(double, double) {

    cout << "The addition of these numbers is: " << (a + b) << endl;
}

double addition(double, double, double) {


    cout << "The addition of these numbers is: " << (a + b + c) << endl;
}

double addition(double, double, double, double) {


    cout << "The addition of these numbers is: " << (a + b + c + d) << endl;
}

double addition(double, double, double, double, double) {


    cout << "The addition of these numbers is: " << (a + b + c + d + e) << endl;
}

