#include <iostream>

using namespace std;

int main()
{
    string str;
    int test1 = 0,test2 = 0;
    cout<<"Enter the string :";
    cin>>str;
    for(int i = 0;i  < str.length()-1; i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            test1 = 1;
        }
        if(str[i] >= '0' && str[i] <= '9'){
            test2 = 1;
        }
    }
    if(test1 == 1 && test2 == 1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
