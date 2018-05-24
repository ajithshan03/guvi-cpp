#include <iostream>
using namespace std;
int main(){
    int i,set = 1;
    cin>>i;
    for(int j = 2;j < i;j++){
        if(i % j ==  0){
            set = 0;
            cout<<"yes";
            break;
        }
    }
    if(set == 1){
        cout<<"no";
    }
}
