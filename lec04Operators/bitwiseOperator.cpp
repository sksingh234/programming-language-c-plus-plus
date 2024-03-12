#include<iostream>
using namespace std;
int main(){
    int  a = 5; //0101
    // bitwise complement
    cout<<(~a)<<endl; 
    cout<< (a << 1) <<endl; //10
    cout<<(a>>1)<<endl; //2

    int b = 8; //1000

    cout<<(a&b)<<endl; //0
    cout<<(a|b)<<endl; //1101=13

    return 0;
}