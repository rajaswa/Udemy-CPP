//
// Created by Rajaswa on 22-12-2017.
//

#include <iostream>

using namespace std;

int main ()
{
    int integers[3][3];
     integers[0][0]=1;
    integers[0][1]=2;
    integers[0][2]=3;
    integers[1][0]=4;
    integers[1][1]=5;
    integers[1][2]=6;
    integers[2][0]=7;
    integers[2][1]=8;
    integers[2][2]=9;

    int a,b;
    cout<<"enter the coordinates of required array elements [(1,2,3);(1,2,3)] : "<<endl;
    cin>>a>>b;

    cout<<"The entered coordinates represent the following element : "<<integers[a-1][b-1];

    return 0;



}