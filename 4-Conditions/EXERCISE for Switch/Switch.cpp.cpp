#include <iostream>

using namespace std;

int main ()
{

cout<<  "1. Cola"<<endl<<
        "2. Chocolate Bar"<<endl<<
        "3. Water"<<endl<<
        "4. Lemonade"<<endl<<
        "5. Soda"<<endl<<
        "6. Burger"<<endl<<
        "please enter the number code of the item of choice :  ";
    int choiceCode;
    cin>>choiceCode;

    switch (choiceCode)

    {
        default:
            cout<<"incorrect choice code !!";
        case 1:
            cout<<"you have ordered a cola !";
            break;
        case 2:
            cout<<"you have ordered a chocolate bar !";
            break;
        case 3:
            cout<<"you have ordered  water !";
            break;
        case 4:
            cout<<"you have ordered a Lemonade !";
            break;
        case 5:
            cout<<"you have ordered a Soda !";
            break;
        case 6:
            cout<<"you have ordered a Burger !";
            break;








    }
    return 0;
}