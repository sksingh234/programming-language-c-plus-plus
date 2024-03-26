#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 45, 63, 2, 780};
    int key = 43;

    int ans = -1;
    for (int idx = 0; idx < 5; idx++)
    {
        if (key == arr[idx])
        {
            ans = idx;
            break;
        }
        else
            continue;
    }
    cout<<"the result is :"<<ans;
    return 0;
}