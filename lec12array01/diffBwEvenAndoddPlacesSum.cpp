#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int difference = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            difference += arr[i];
        }
        else
        {
            difference += arr[i];
        }
    }
    cout << "the difference b/w even and odd places sum of indices is : " << difference;
}