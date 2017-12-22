#include <iostream>

using namespace std;

int main ()
{
    cout<<"month codes : "<<endl<<"1. January"<<endl
            <<"2. February"<<endl
            <<"3. March"<<endl
            <<"4. April"<<endl
            <<"5. May"<<endl
            <<"6. June"<<endl
            <<"7. July"<<endl
            <<"8. August"<<endl
            <<"9. September"<<endl
            <<"10. October"<<endl
            <<"11. November"<<endl
            <<"12. December"<<endl
            <<"Please enter your month code : ";


    int monthCode;
    int yearCode;
    cin>>monthCode;
     switch (monthCode)
    {
        case 1:
            cout<<"This month has 31 days !";
        break;
        case 2 :
            cout<<"Please enter the year : "<<endl;
            cin>>yearCode;
            if ((yearCode % 4 == 0) && ((yearCode % 100 != 0)|| (yearCode % 400 == 0)))
            {cout<<"This month has 29 days !";}
            else
            {cout<<"This month has 28 days !";}
            break;
        case 3:
            cout<<"This month has 31 days !";
            break;
            case 4:
            cout<<"This month has 30 days !";
            break;
        case 5:
            cout<<"This month has 31 days !";
            break;
        case 6:
            cout<<"This month has 30 days !";
            break;
        case 7:
            cout<<"This month has 31 days !";
            break;
        case 8:
            cout<<"This month has 31 days !";
            break;
        case 9:
            cout<<"This month has 30 days !";
            break;
        case 10:
            cout<<"This month has 31 days !";
            break;
        case 11:
            cout<<"This month has 30 days !";
            break;
        case 12:
            cout<<"This month has 31 days !";
            break;
        default:cout<<"enter a valid month code please : ";
    }
    return 0;

}