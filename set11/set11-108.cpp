#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int a,d,n,ans = 0;
    cin>>a>>d>>n;
    for(int i=0;i<n;i++){
        ans=ans+(a+i*d);
    }
    cout<<ans;
}
