#include <iostream>
using namespace std;
int main(){
    int a,i,total = 0;
    cin>>a;
    int arr[a];
    for(i = 0;i < a;i++){
        cin>>arr[i];
    }
    for(i = 0;i < a;i++){
        total += arr[i];
    }
    cout<<total;
}
