#include <iostream>

using namespace std;

int main()
{
    string a;
    int i;
    cout<<"Enter the string to repeat:"<<endl;
    cin>>a;
    cout<<"Enter the number to repeat:"<<endl;
    cin>>i;
    cout<<".............................."<<endl;
    for(int j = 0;j < i;j++){
        cout<<a<<endl;
    }
    return 0;
}
