#include <iostream>

using namespace std;

int main()
{
    int n,a,d,i,ans = 0;
    cout<<"Enter the number of items"<<endl;
    cin>>n;
    cout<<"Enter the starting number"<<endl;
    cin>>a;
    cout<<"Enter the difference"<<endl;
    cin>>d;
    for(i = 0;i < n;i++){
        ans += a;
        a += d;
    }
    cout<<ans;
    return 0;
}
