#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i,result,set = 0;
    cout<<"Enter a number :";
    cin>>i;
    for(int j = 0;j <= i;j++){
        result = pow(2,j);
        if(result == i){
            set = 1;
        }else{
            set = 0;
        }
    }
    if(set == 1){
        cout<<"Its a power of 2";
    }else{
        cout<<"Its not a power of 2";
    }
    return 0;
}
