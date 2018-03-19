#include<iostream>
using namespace std;
int main(){
    int j,set = 0;
    cin>>j;
    for(int i = 2;i < j/2;i++){
        if(j % i == 0){
            set = 1;
            break;
        }
    }
    if(set == 1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
