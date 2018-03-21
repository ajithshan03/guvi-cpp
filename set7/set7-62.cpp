#include <iostream>
using namespace std;

int main()
{
    string S;
    int flag = 0;
    cout<<"Enter the string:";
    cin>>S;
    for(int i = 0; i < S.length()-1; i++){
        if(S[i] == '0' || S[i] == '1'){
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        cout<<"No";
    } else {
        cout<<"yes";
    }
    return 0;
}
