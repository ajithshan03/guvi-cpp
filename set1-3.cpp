#include <iostream>

using namespace std;

int main()
{
    char letter;
    cout<<"Enter the letter to check......."<<endl;
    cin>>letter;
    if(letter == 'a'|| letter =='e'||letter =='i'||letter =='o'||letter =='u'||letter =='A'||letter =='E'||letter =='I'||letter =='O'||letter =='U'){
        cout<<"It is a vowel";
    }else{
        cout<<"It is a consonent";
    }
    return 0;
}



