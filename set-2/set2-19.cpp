#include <iostream>

using namespace std;

int main()
{
    
    int i,n,Fact = 1;
    cout<<"Enter a number to find the factorial: ";
    cin>>n;
    for(i = 1;i <= n;i++){
        Fact *= i;
    }
    cout<<"Factorial of "<<n<<" is:"<<Fact;
}

