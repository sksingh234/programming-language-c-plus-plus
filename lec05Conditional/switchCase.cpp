#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "enter the no of day.";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "tueday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;

    default:
        cout << "invalid day no:" << endl;
        break;
    }
}