#include <iostream>
using namespace std;

int main()
{
    string str;
    int count = 1,i;
    cout << "Enter a sentance: ";
    getline(cin, str);
    for(i = 0;i <= str.length()-1;i++){
        if(str[i] == '.'){
            count++;
        }
    }
    cout<<count;
    return 0;
}

