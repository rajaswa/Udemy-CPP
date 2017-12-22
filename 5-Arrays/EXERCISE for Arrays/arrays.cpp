#include <iostream>
using namespace std;

int main ()
{
    int a,b,c,d;

    double array[4];
    cout<<"enter the 4 numbers for your array : ";
    cin>>a>>b>>c>>d;
    array[0]= int (a);
    array[1]= int (b);
    array[2]= int (c);
    array[3]= int (d);


    cout<<"the sum of these nos is : "<<(array[0]+array[1]+array[2]+array[3])<<endl<<&array[0]<<endl<<&array[3];



    return 0;
}