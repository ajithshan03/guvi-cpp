#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int a,b,count=0;
    cin>>a>>b;
    int arr[a];
    for(int i = 0;i < a;i++){
        cin>>arr[i];
    }
    for(int i = 0;i < a;i++){
        if(arr[i] == b){
            count++;
        }
    }
    cout<<count;
}
