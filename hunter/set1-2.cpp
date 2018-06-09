#include<iostream>
using namespace std;
int main(){
    int a,temp;
    cin>>a;
    int n[a];
    for(int i = 0;i < a;i++){
        cin>>n[i];
    }
    for(int i = 0;i < a;i++){
        for(int j = i+1;j < a;j++){
            if(n[i] < n[j]){
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    for(int i = 0;i < a;i++){
        cout<<n[i];
    }
    return 0;
}
