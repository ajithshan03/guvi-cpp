#include <iostream>

using namespace std;

int main()
{
    int i,n[10],max;
    cout<<"Enter the elements to the array"<<endl;
    for(i=0;i<10;i++){
        cin>>n[i];
    }
    max = n[0];
    for(i=1;i<10;i++){
        if(max<n[i]){
            max = n[i];
        }
    }
    cout<<"maximum is:"<<max;

    return 0;
}
