#include<iostream>
using namespace std;
int main(){
    int i,j,set = 0;
    cin>>i>>j;
    i *= j;
    for(int k = 0;k <= i;k++){
        if(k * k == i){
            set = 1;
        }
    }
    if(set == 1){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}
