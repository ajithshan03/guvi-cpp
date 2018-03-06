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
            continue;
        }else if(str[i] >= 'a' && str[i] <= 'z' ||str[i] >= 'A' && str[i] <= 'B'){
            continue;
        }else if(str[i] ==' ' || str[i] == '.'){
            continue;
        }else{
            count++;
        }
    }
    cout<<count;
    return 0;
}

