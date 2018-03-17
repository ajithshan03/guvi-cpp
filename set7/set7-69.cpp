#include <iostream>
using namespace std;
int main()
{
    int i,j;
    cin>>i>>j;
    i -= j;
    if(i%2 == 0){
        cout<<"yes";
    } else {
        cout<<"no";
    }
    return 0;
}
