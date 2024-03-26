#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int idx = 0; idx < 5; idx++)
    {
        cin >> arr[idx];
    }
    int maxvalue = arr[0];
    for (int idx = 0; idx < 5; idx++)
    {
        if (maxvalue < arr[idx])
        {
            maxvalue = arr[idx];
        }
        else
        {
            continue;
        }
    }
    cout << "the maximum value out of array element is :" << maxvalue;
    return 0;
}