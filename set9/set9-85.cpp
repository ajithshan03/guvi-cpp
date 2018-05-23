#include <iostream>
using namespace std;
int calculate(int j,string str1){
    while(j < str1.length()){
        cout<<str1[j];
        j += 2;
    }
}
int main()
{
    string str;
    cin>>str;
    int i=0;
    calculate(i,str);
    cout<<" ";
    i=1;
    calculate(i,str);
    return 0;
}
