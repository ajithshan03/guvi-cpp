#include <iostream>
using namespace std;
int main()
{
    int i,j;
    cin>>i>>j;
    while(i != j){
        if(i > j){
            i  -= j;
        }else{
            j -= i;
        }
    }
    cout<<i;
    return 0;
}
