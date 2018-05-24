#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int a,count = 0;
    cin>>a;
    while(a > 0){
        a = a / 10;
        count++;
    }
    cout<<count;
}
