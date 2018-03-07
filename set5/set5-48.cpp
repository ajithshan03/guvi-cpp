#include <iostream>
using namespace std;

int main()
{
    int n,a[n],result = 0;
    cout<<"Enter a number:";
    cin>>n;
    for(int j = 0;j < n;j++){
        cin>>a[j];
        result += a[j];
    }
    result = result/n;
    cout<<"Average of the array is :"<<result;
    return 0;
}
