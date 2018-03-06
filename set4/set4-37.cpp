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
    temp = a;
    a = b;
    b =temp;
    cout<<a<<" "<<b;
    return 0;
}
