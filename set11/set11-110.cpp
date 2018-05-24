#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int a,sum = 0;
    cin>>a;
    for(int j = 1;j <=a;j++){
        sum += j;
    }
    cout<<sum;
}
