#include <iostream>
using namespace std;

int main()
{
    int a[10],max = 0;
    cout<<"Enter the numbers in the array"<<endl;
    for(int i = 0;i < 10;i++){
        cin>>a[i];
    }
    for(int i = 0;i < 10;i++){
        cout<<"....."<<endl;
        cout<<a[i];
        cout<<"....."<<endl;
        if(a[i] < max){
            max = a[i];
        }
    }
    cout<<"Maximum amoung 10 numbers is :"<<max<<endl;
    return 0;
}
