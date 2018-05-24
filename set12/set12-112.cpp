#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int a,b,set = 1;
    cin>>a>>b;
    int arr[a];
    for(int i = 0;i < a;i++){
        cin>>arr[i];
    }
    for(int i = 0;i < a;i++){
        if(arr[i] == b){
            cout<<"yes";
            set = 0;
            break;
        }
    }
    if(set == 1){
        cout<<"no";
    }
}
