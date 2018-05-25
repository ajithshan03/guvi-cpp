#include<iostream>
using namespace std;
int main(){
    int i,k,temp;
    cin>>i>>k;
    int a[i];
    for(int j = 0;j < i;j++){
        cin>>a[j];
    }
    for(int j = 0;j < i;j++){
        if(a[j] > a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    cout<<a[k-1];
    return 0;
}
