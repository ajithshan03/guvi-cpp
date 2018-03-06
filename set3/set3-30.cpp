#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,j,k,l,ans1,ans2;
    cout<<"Enter the first hour and minute:"<<endl;
    cin>>i>>j;
    cout<<"Enter the second hour and minute:"<<endl;
    cin>>k>>l;
    ans1 = k - i;
    ans2 = l - j;
    cout<<"The difference is:";
    cout<<abs(ans1)<<" "<<abs(ans2);
    return 0;
}
