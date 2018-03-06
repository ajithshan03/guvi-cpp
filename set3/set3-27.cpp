#include <iostream>
#include <string>
using namespace std;

int main(){
string a;
int set = 0;
int i,temp;
cin>>a;
for(i = 0;a[i <= a.length() ;i++){
    if(a[i] >= 0 && a[i] <= 9){
        set = 1;
    }else{
        set = 0;
        break;
    }
}

if(set == 1){
    cout<<"The string is numeric"<<endl; 
}else{
    cout<<"The string is non-numeric"<<endl; 
}
return 0;
}
