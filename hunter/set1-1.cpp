#include<iostream>
using namespace std;
int main(){
    int a,b = 0,set,check = 0;
    cin>>a;
    int n[a],copy[a];
    for(int i = 0;i < a;i++){
        cin>>n[i];
    }
    for(int i = 0;i < a;i++){
        for(int j = 0;j < a;j++){
            if(i != j && n[i] == n[j]){
                if(b == 0){
                    check = 1;
                    copy[b] = n[i];
                    b++;
                    break;
                }else{
                    set = 0;
                    for(int k = 0;k <= b;k++){
                        if(copy[k] == n[i]){
                            set = 0;
                            break;
                        }else{
                            set = 1;
                        }
                    }
                    if(set == 1){
                        copy[b] = n[i];
                        b++;
                    }
                }
            }
        }
    }
    if(check == 0){
        cout<<"Unique";
    }else{
        for(int i = 0;i < b;i++){
            cout<<copy[i];
        }
    }
    return 0;
}
