#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 11; i++)
    {
        for (int j = i+1; j < 11; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = -1;
                arr[j] = -1;
                break;
            }
        }
    }
    for (int i = 0; i < 11; i++)
    {
        if (arr[i] > 0)
        {
            cout << "the unique no is : " << arr[i];
            return 0;
        }
    }
}    