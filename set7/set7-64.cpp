#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    a = a + b;
    if (a % 2 == 0){
        cout<<"Even";
    } else {
        cout<<"Odd";
    }
    return 0;
}
