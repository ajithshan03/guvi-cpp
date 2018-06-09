#include<iostream>
using namespace std;
int main(){
    int a,set;
    cin>>a;
    int n[a];
    for(int i = 0;i < a;i++){
        cin>>n[i];
    }
    for(int i = 0;i < a;i++){
        set = 0;
        for(int j = 0;j < a;j++){
            if(i != j && n[i] == n[j]){
                set = 1;
                break;
            }
        }
        if(set == 0){
            cout<<n[i];
            break;
        }
    }
    return 0;
}
