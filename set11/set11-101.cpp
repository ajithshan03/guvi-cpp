#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int a;
    cin>>a;
    a = str.length() - a;
    for(int i = a;i<str.length();i++){
        cout<<str[i];
    }
}
