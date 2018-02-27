#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the three numbers..."<<endl;
    cin>>a>>b>>c;
    if(b < a && c < a){
        cout<<a<<" is the largest number"<<endl;
    }else if(a < b && c < b){
        cout<<b<<" is the largest number"<<endl;
    }else{
        cout<<c<<" is the largest number"<<endl;
    }
    return 0;
}
