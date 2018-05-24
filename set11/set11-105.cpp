#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a >= 1 && a<= 26){
        char ch = a + 64;
        cout<<ch;
    }
}
