#include <iostream>
using namespace std;
int main()
{
    string str,test,temp;
    cin>>str;
    temp = str;
    for(int i = str.length();i >= 0; i--){
            int j = 0;
            test += str[i];
            j++;
    }
    if(temp == test)
        cout<<"yes";
    else
        cout<<"No";
    return 0;
}
