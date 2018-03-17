#include <iostream>

using namespace std;

int main()
{
    string S;
    int k;
    cout<<"Enter the string:";
    cin>>S;
    cout<<"Enter the number of letters to be displayed :";
    cin>>k;
    for(int i = 0;i < k;i++){
        cout<<S[i];
    }
    return 0;
}
