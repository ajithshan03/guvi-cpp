#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter the number 1:";
    cin>>a;
    cout<<"Enter the number 2:";
    cin>>b;
    cout<<"Swapping..."<<endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<a<<" "<<b;
    return 0;
}


