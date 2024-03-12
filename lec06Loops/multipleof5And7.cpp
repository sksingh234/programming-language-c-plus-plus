#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout << "enter the value of n:";
    // cin >> n;

    int i = 5;
    while (i >= 0)
    {
        if ( i % 7 == 0)
        {
            cout << "the common multiple of 5 and 7 is:" << i;
            break;
        }
        i += 5;
    }
    return 0;
}