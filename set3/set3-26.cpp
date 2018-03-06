#include <iostream>
using namespace std;

int main(){
    int m,n[m],temp;
    cout<<"Enter the number of elements to be enter in the array"<<endl;
    cin>>m;
    cout<<"Enter the number of elements in to the array"<<endl;
    for(int i=0;i<m;i++){
        cin>>n[i];
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(n[i]>n[j]){
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    cout<<"Median element:";
    if(m % 2 == 0){
        cout<<n[(m/2)-1];
    }else{
        cout<<n[m/2];
    }
}
