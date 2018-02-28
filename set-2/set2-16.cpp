#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    cout<<"Enter the starting number"<<endl;
    cin>>i;
    cout<<"Enter the ending number"<<endl;
    cin>>j;
    cout<<"The prime numbers between "<<i<<" and "<<j<<" are..."<<endl;
    for(k = i;k < j;k++){
        int set = 0;
        for(int m = 2;m < k;m++){
            if(k % m == 0){
                set = 1;
                break;
            }
        }
        if(set == 0){
            cout<<" "<<k;
        }
    }
    return 0;
}
