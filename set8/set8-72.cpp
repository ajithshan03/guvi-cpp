#include <iostream>
using namespace std;
int main()
{
    string str;
    int set = 0;
    cin>>str;
    for(int i = 0; i < str.length(); i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            set = 1;
            break;
        }
    }
    if(set == 1){
        cout<<"yes";
    } else {
        cout<<"No";
    }
    return 0;
}
