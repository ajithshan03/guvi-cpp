#include <iostream>

using namespace std;

int main()
{
    int k,i,j,m;
    int n[i];
    cout<<"Enter the number of values need to be stored in array...";
    cin>>m;
    for(i = 0;i < m;i++){
        cin>>n[i];
    }
    cout<<"enter the first K numbers to add it...";
    cin>>k;
    for(i = 0;i < k;i++){
        j = n[i] + j;
    }
    cout<<"sum of first "<<k<<" numbers are..."<<j<<endl;
}
