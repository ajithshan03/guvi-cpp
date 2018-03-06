#include <iostream>
#include <string>
using namespace std;

int main(){
string a;
int set = 1;
cin>>a;
for(int i = 0;i <= a.length()-1;i++){
    if(a[i] >= '0' && a[i] <= '9'){
        set = 0;
    }else{
        set = 1;
        break;
    }
}
if(set == 0){
    cout<<"The string is numeric"<<endl; 
}else{
    cout<<"The string is non-numeric"<<endl; 
}
return 0;
}

