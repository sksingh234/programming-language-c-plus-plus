#include <iostream>
using namespace std;
int le(int arr[], int n)
{
    int index = 0;
    int maxvalue = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxvalue < arr[i])
        {
            maxvalue = arr[i];
            index = i;
        }
    }
    arr[index] = -1;
    return maxvalue;
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int arr[n];
    for (int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }
    int max = le(arr, n);
    cout << "    " << max;
    int secmax = le(arr,n);
    cout << "    " << secmax;
}

 