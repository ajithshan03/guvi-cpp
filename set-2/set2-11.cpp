#include <iostream>

using namespace std;

int main()
{
    int i,j,ans = 1;
    cout<<"Enter a number..."<<endl;
    cin>>i;
    cout<<"Enter the power value to find for the number "<<i<<"..."<<endl;
    cin>>j;
    for(int k =0; k < j;k++){
    ans *= i;
    }
    cout<<"Calculated result is..."<<ans<<endl;
}
