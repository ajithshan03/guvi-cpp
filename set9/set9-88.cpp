#include <iostream>
using namespace std;
int main()
{
    int i,j,a,b;
    cin>>i>>j;
    a = i;
    b = j;
    while(a != b){
        if(a > b){
            a  -= b;
        }else{
            b -= a;
        }
    }
    int k = i*j/a;
    cout<<k;
    return 0;
}
