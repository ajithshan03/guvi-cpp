#include <iostream>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter the two strings"<<endl;
    cin>>str1>>str2;
    if(str1.length() == str2.length()){
        cout<<str2;
    }else if(str1.length() > str2.length()){
        cout<<"Greater string is:"<<str1;
    }else{
        cout<<"Greater string is:"<<str2;
    }
    return 0;
}
