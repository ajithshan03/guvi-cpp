#include <iostream>
using namespace std;
int main()
{
    int num,sum = 0,rem;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num != 0){\
        rem = num%10;
        sum += rem;
        num /= 10;
    }
    cout<<sum;
    return 0;
}
