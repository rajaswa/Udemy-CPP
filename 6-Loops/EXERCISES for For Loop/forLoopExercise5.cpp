//
// Created by Rajaswa on 22-12-2017.
//

#include <iostream>

using namespace std;

int main ()
{
    int asterisk;
    cout<<"enter the number of asterisks required : "<<endl;
    cin>>asterisk;

    for (int i=1; i<=asterisk; i++)
    {
        cout<<"*";
        if (i%5==0)
            cout<<endl;
    }

    return 0;
}