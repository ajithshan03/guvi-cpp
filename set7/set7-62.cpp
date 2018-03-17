#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    string S;
    int k;
    cout<<"Enter the string:";
    cin>>S;
    for(int i = 0; i < S.length()-1; i++){
        cout<<bitset<8>(S[i])<<endl;
    }
    return 0;
}
