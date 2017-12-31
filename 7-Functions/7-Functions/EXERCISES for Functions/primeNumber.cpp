//
// Created by Rajaswa on 26-12-2017.
//
#include <iostream>

using namespace std;

int main() {
    int check;
    int testNo;
    cout << "enter the number you wish to test: " << endl;
    cin >> testNo;
    for (int i = 2; i < testNo; i++) {
        check = (testNo % i);
        if (check == 0) {
            break;
        }
    }
    if(check!=0 || testNo==2 || testNo==3){
        cout<<"this number is prime !"<<endl;
    }
    else {
        cout<<"this number is not prime !"<<endl;
    }

}

