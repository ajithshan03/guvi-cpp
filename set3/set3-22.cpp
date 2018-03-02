#include <iostream>

using namespace std;

int main()
{
    int m,n,max;
    cout<<"Enter the size of the array"<<endl;
    cin>>m;
    cout<<"Enter the elements to the array"<<endl;
    for(int i=0;i<m;i++){
        cout<<n[i];
    }
    max = n[0];
    for(int i=1;i<m;i++){
        if(max<n[i]){
            max = n[i];
        }
    }
    cout<<max;

    return 0;
}


