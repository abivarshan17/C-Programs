Calender-C++

#include <iostream>

using namespace std;

int main()
{
    int day,year;
    cout<<"enter month and year";
    cin>>day>>year;
    switch(day){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        cout<<"Number of days is 31";
    }
    break;
    case 2:
    {
        if(year%4==0){
        cout<<"Number of days is 29";
        }
    }
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    {
        cout<<"Number of days is 30";
    }
    break;
    }
    return 0;
}