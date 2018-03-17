#include <iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    if(i%2 == 0){
        i *= 2;
    } else {
        i++;
        i *= 2;
    }
    cout<<i;
    return 0;
}
