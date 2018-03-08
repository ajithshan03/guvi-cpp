#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    cout<<"Enter a number";
    cin>>i;
    string str = to_string(i);
    for(i = 0;i < str.length();i++){
        cout<<str[i]<<" ";
    }
    return 0;
}
