#include <iostream>

using namespace std;

int main()
{
    int i,a = 0,b = 1;
    cout<<"Enter a number:";
    cin>>i;
    if( i == 1){
        cout<<a<<endl;
    }else if(i == 2){
        cout<<b<<endl;
    }else{
        for(int j = 1;j <= i;j++){
            ans = a + b;
            
            cout<<" "<<ans;
        }
    }
            

    return 0;
}
