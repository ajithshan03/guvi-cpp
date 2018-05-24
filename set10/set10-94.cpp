#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of elements to the :";
    cin>>a;
    cout<<"Enter the array position:";
    cin>>b;
    int n[a];
    cout<<"Enter the number to the array"<<endl;
    for(int i = 0;i < a;i++){
        cin>>n[i];
    }
    cout<<n[b];
}

