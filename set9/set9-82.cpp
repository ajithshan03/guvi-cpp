#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    cout<<"Enter the two numbers A and B";
    cin>>a>>b;
    double area = a*b;
    cout<<"Area of the farm is :"<<setprecision(5)<<area;

    return 0;
}
