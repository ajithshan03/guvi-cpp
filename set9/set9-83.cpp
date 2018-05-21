#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    char oper;
    cout<<"Enter the input sequence"<<endl;
    cin>>a>>oper>>b;
    cout<<"A = "<<a<<" B = "<<b<<endl;
    switch(oper){
        case '/':
            cout<<"Division"<<endl;
            cout<<a<<" "<<oper<<" "<<b<<" = "<<a/b; 
            break;
        case '%':
            cout<<"Mod"<<endl;
            cout<<a<<" "<<oper<<" "<<b<<" = "<<a%b;
            break;
        default:
            cout<<"Invalid entry";
    }
    return 0;
}
