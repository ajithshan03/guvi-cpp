#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    cout<<"Enter the time in minute:";
    cin>>i;
    if(i < 60){
        cout<<"0 "<<i<<endl;
    }else {
        j = i/60;
        k = i%60;
        cout<<j<<" "<<k;
    }
    return 0;
}
