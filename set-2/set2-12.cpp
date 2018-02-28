#include <iostream>
using namespace std;
int main()
{
    int num,temp,rem,rev_num = 0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    temp = num;
    while(temp != 0){
        rem = temp % 10;
        rev_num = rev_num*10 + rem;
        temp /= 10;
    }
    if(rev_num == num){
        cout<<"Its a palindrome"<<endl;
    }else{
        cout<<"Its not a palindrome"<<endl;
    }
    return 0;
}
