#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter the year..."<<endl;
    cin>>a;
    if(a % 4 == 0){
        cout<<"The year "<<a<<" is a leap year"<<endl;
    }else{
        cout<<"The year "<<a<<" is not a leap year"<<endl;
    }
}

