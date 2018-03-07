#include <iostream>
using namespace std;

int main()
{
    int n,a[n],max,min;
    cout<<"Enter a number:";
    cin>>n;
    for(int j = 0;j < n;j++){
        cin>>a[j];
    }
    if(n == 1){
        cout<<"Minimum of the array:"<<a[0]<<endl;
        cout<<"Maximum of the array:"<<a[0]<<endl;
    }else{
        min = a[0];
        for(int j = 1;j < n;j++){
            if(a[j] > min){
                max = a[j];
            }
            if(a[j] < min){
                min = a[j];
            }
        }
        cout<<"Minimum of the array:"<<min<<endl;
        cout<<"Maximum of the array:"<<max<<endl; 
    }
    return 0;
}
