#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 51; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}