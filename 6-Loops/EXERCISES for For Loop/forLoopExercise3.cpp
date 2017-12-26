//
// Created by Rajaswa on 22-12-2017.
//

#include <iostream>

using namespace std;

int main()
{
    float base;
    int power;
    cout<<"enter the base number : "<<endl;
    cin>>base;
    cout<<"enter the power number : "<<endl;
    cin>>power;
float baseRepeat= base;

    for(int i=2; i<=power; i++)
    {

        baseRepeat=base*baseRepeat;

    }

    cout<<baseRepeat<<endl;
}