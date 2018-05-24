#include <iostream>
using namespace std;
int main(){
    int i,n;
    cin>>i;
    while(i > 0){
        n = i % 10;
        cout<<n;
        i /= 10;
    }
}
