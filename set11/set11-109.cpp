#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int a,min;
    cin>>a;
    int i[a];
    for(int j = 0;j < a;j++){
        cin>>i[j];
    }
    min = i[0];
    for(int j = 1;j < a;j++){
        if(min > i[j]){
            min = i[j];
        }
    }
    cout<<min;
}
