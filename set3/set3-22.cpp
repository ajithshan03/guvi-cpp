#include <iostream>

using namespace std;

int main()
{
    int i,m,n[i],max;
    cout<<"Enter the size of the array"<<endl;
    cin>>m;
    cout<<"Enter the elements to the array"<<endl;
    for(i=0;i<m;i++){
        cin>>n[i];
    }
    max = n[0];
    for(i=1;i<m;i++){
        if(max<n[i]){
            max = n[i];
        }
    }
    cout<<"Largest number in the given list is:"<<max;

    return 0;
}
