#include<iostream>
using namespace std;
int main(){
    int a,flag = 0;
    cin>>a;
    int n[a];
    for(int i = 0;i < a;i++){
        cin>>n[i];
    }
    for(int i = 0;i < a;i++){
        if(i == n[i]){
            cout<<i<<" ";
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"-1";
    }
    return 0;
}
