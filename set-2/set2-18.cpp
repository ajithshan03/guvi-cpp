#include <iostream>

using namespace std;

int main()
{
    int i,j,k,temp1,temp,count,rev,rem,ans,finalAns;
    cout<<"Enter a starting number"<<endl;
    cin>>i;
    cout<<"Enter ending number"<<endl;
    cin>>j;
    for(k = i+1;k<j;k++){
        count = 0,rev = 0,rem = 0,ans = 1,finalAns = 0;
        temp = k;
        while(temp > 0){
            temp = temp / 10;
            count++;
        }
        temp1 = k;
        while(temp1 != 0){
            rem = temp1 % 10;
            temp1 = temp1/10;
            for (int j = 1;j <= count;j++){
                ans *= rem;
            }
        finalAns += ans;
        ans = 1;
        }
        if(finalAns == k){
            cout<<" "<<k;
        }
    }
}
