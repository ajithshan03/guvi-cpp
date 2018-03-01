#include <iostream>
using namespace std;
int main()
{
    int i,j,ans;
    cout<<"Enter a number:";
    cin>>i;
    cout<<endl;
    for(j = 1;j <= 5;j++){
        ans = i * j;
        cout<<" "<<ans;
    }
}
