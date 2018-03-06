#include <iostream>
using namespace std;

int main()
{
    string str;
    int count = 0,i;
    cout << "Enter a sentance: ";
    getline(cin, str);
    for(i = 0;i <= str.length()-1;i++){
        if(str[i] >= '0' && str[i] <= '9'){
            count++;
        }
    }
    cout<<count;
    return 0;
}
