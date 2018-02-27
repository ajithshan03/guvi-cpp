#include <iostream>

using namespace std;

int main()
{
    int n,a = 0;
    cout<<"enter N number number to sum them'..."<<endl;
    cin>>n;
    for(int i = 1; i <= n; i++){
        a = i + a;
    }
    cout<<"The sum of first "<<n<<" natural numbers are..."<<a<<endl;
}
