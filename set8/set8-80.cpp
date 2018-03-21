#include <iostream>
using namespace std;
int main()
{
    int i,j,k = 0,a[100];
    cin>>i;
    while(i != 0){
        j = i % 10;
        i /= 10;
        if(j % 2 != 0){
            a[k] = j;
            k++;
        } 
    }
    for(i=k-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
