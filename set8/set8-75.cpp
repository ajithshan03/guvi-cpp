#include <iostream>
using namespace std;
int main()
{
    string str;
    int i;
    cin>>str;
    i = str.length()/2;
    if(str.length() % 2 == 0){
        str[i-1] = '*';
        str[i] = '*';
    } else {
        str[i] = '*';
    }
    cout<<str;
    return 0;
}
