#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the number 1:";
    cin>>a;
    cout<<"Enter the number 2:";
    cin>>b;
    cout<<"Swapping..."<<endl;
    a = a ^ b;
    cout<<a<<endl;
    b = a ^ b;
    cout<<b<<endl;
    a = a ^ b;
    cout<<a<<endl;
    cout<<a<<" "<<b;
    return 0;
}
