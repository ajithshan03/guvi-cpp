#include <iostream>

using namespace std;

int main()
{
    int i,m,n[i],min;
    cout<<"Enter the size of the array"<<endl;
    cin>>m;
    cout<<"Enter the elements to the array"<<endl;
    for(i=0;i<m;i++){
        cin>>n[i];
    }
    min = n[0];
    for(i=1;i<m;i++){
        if(min>n[i]){
            min = n[i];
        }
    }
    cout<<"smallest number in the given list is:"<<min;

    return 0;
}
