#include <iostream>

using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter the two numbers :"<<endl;
    cin>>a>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"Numbers are swapping..."<<endl;
    cout<<a<<" "<<b;
    return 0;
}
