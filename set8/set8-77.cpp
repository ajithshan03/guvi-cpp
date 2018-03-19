#include<iostream>
using namespace std;
int main(){
    int j;
    cin>>j;
    for(int i = 1;i <= j;i++){
        if(j % i == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}
