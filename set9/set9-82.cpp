#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    cout<<"Enter the two numbers A and B";
    cin>>a>>b;
    double area;
    area = a*b;
    cout<<"Area of the farm is :"<<fixed<<setprecision(5)<<area;

    return 0;
}
