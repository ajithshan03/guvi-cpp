#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,n;
    cin>>i;
    for(int j = 1; j < i; j++){
        n = pow(2,j);
        if(i < n){
            cout<<n;
            break;
        }
    }
    return 0;
}
