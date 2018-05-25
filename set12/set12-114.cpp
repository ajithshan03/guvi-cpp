#include<iostream>
using namespace std;
int main(){
    int i,k,count = 0;
    cin>>i>>k;
    int a[i];
    for(int j = 0;j < i;j++){
        cin>>a[j];
    }
    for(int j = 0;j < i;j++){
        if(a[j] % 2 != 0){
            count++;
            if(count == k){
                cout<<a[j];
                break;
            }
        }
    }
    return 0;
}
