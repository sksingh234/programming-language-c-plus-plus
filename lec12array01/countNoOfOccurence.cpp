#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout << "enter the element of vector : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    int x;
    cout << "enter the no to count : ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if(v[i]==x){
            count++;
        }
    }
    cout<<"the occurence of digit "<< x << " is :"<< count;
    
}