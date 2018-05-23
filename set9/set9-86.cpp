#include <iostream>
using namespace std;
int main()
{
    string str;
    int set = 0;
    cin>>str;
    for(int i = 0;i < str.length();i++){
        for(int j = 0;j < str.length();j++){
            if(i != j && str[i]== str[j]){
                set = 1;
                break;
            }    
        }
        if(set == 1){
            cout<<"no";
            break;
        }
    }
    if(set == 0){
        cout<<"yes";
    }
    return 0;
}
