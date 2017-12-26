//
// Created by Rajaswa on 25-12-2017.
//
#include <iostream>

using namespace std;

void exponentiation();

int main (){

    exponentiation();
}

void exponentiation(){
    double b,e,bTemp;
    cout<<" enter the value of base: "<<endl;
    cin>>b;
    cout<<" enter the value of exponent: "<<endl;
    cin>>e;

    bTemp = b;

    for ( ; e>1; e--){
        b *= bTemp;

    }

    cout<<"the value of following exponent is: "<< b <<endl;
}