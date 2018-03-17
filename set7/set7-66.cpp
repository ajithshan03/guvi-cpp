#include <iostream>
using namespace std;
int main()
{
    int i,j,set = 0;
    cout<<"Enter the number"<<endl;
    cin>>i;
    for(j = 2;j <= i/2;j++){
        if(i%j == 0){
            set = 1;
            break;
        }
    }
    if(set == 0){
        cout<<"Its a prime number"<<endl;
    }else{
        cout<<"Its not a prime number";
    }
}
