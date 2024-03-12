#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;
    int sum = 0;
    do
    {
        sum += n;
        n--;
    } while (n > 0);
    cout << "the sum is:" << sum;
    return 0;
}