#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value till which you want the sum:";
    cin >> n;
    int i = 1, sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "the sum is:" << sum << endl;
    return 0;
}