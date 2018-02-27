#include <iostream>

using namespace std;

int main()
{
    char letter;
    cout<<"enter the letter to check..."<<endl;
    cin>>letter;
    if((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z') ){
        cout<<"It is an alphabet";
    }else{
        cout<<"It is not  an alphabet ";
    }
    return 0;
}

