#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, target, pairs = 0;
    cout << "enter the  value of n : ";
    cin >> n;
    cout << "enter the target : ";
    cin >> target;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == target)
            {
                pairs++;
            }
        }
    }
    cout<<"total pairs : "<<pairs;

}