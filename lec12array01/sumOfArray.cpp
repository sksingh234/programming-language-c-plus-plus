#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int idx = 0; idx < 5; idx++)
    {
        cin >> arr[idx];
    }
    int sum = 0;
    for (int idx = 0; idx < 5; idx++){
        sum = sum + arr[idx];
    }
    cout<<"the sum of array element is :"<<sum;
    return 0;
}