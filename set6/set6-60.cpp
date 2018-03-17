#include <iostream>

using namespace std;

int main()
{
    int i,a = 1,b = 1,ans;
    cout<<"Enter a number:";
    cin>>i;
    for(int j = 1;j <= i;j++){
        if( j == 1){
            cout<<a;
        }else if(j == 2){
            cout<<" "<<b;
        }else {
            ans = a + b;
            a = b;
            b = ans;
            cout<<" "<<ans;
        }
    }
    return 0;
}
