#include <iostream>
using namespace std;
int main(){
    int i,n,b = 1;
    cin>>i;
    while(i > 0){
        n = i % 10;
        b *= n;
        i /= 10;
    }
    cout<<b;
}
