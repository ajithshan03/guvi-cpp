#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    cout<<"Enter the starting number"<<endl;
    cin>>i;
    cout<<"Enter the ending number"<<endl;
    cin>>j;
    cout<<"The odd numbers between "<<i<<" and "<<j<<" are..."<<endl;
    for(k = i+1;k < j;k++){
        if(k%2 != 0){
            cout<<k<<" ";
        }
    }
    return 0;
}
