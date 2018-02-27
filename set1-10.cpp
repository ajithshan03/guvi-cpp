#include <iostream>

using namespace std;

int main()
{
    int i,count = 0;
    cout<<"Enter the number to count the digits it contain "<<endl;
    cin>>i;
    while(i > 0){
        i = i/10;
        count++;
    }
    cout<<"The number contain "<<count<<" digits"<<endl;
}
