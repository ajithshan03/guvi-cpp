#include <iostream>

using namespace std;

int main()
{
    int i,temp1,temp,count = 0,rev = 0,rem = 0,ans = 0,srev;
    cout<<"Enter a number"<<endl;
    cin>>i;
    temp = i;
    while(temp > 0){
        temp = temp / 10;
        count++;
    }
    temp1 = i;
    for (int j = 1;j <= count;j++){
        while(temp1 != 0){
        rem = temp1 % 10;
        rev = rem*10;
        temp1 /= 10;
        }
        temp1 *= temp1;
    }
    cout<<temp1;
}
