#include <iostream>

using namespace std;

int main()
{
    int i,temp1,temp,count = 0,rev = 0,rem = 0,ans = 1,finalAns = 0;
    cout<<"Enter a number"<<endl;
    cin>>i;
    temp = i;
    while(temp > 0){
        temp = temp / 10;
        count++;
    }
    temp1 = i;
        while(temp1 != 0){
            rem = temp1 % 10;
            temp1 = temp1/10;
            for (int j = 1;j <= count;j++){
                ans *= rem;
            }
        finalAns += ans;
        ans = 1;
    }
    if(finalAns == i){
        cout<<"Its an armstrong"<<endl;
    }else{
        cout<<"Its not an armstrong"<<endl;
    }
}
