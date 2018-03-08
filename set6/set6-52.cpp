#include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter a number:";
    cin>>i;
    switch(i){
        case 1:
        cout<<"One";
        break;    
        case 2:
        cout<<"Two";
        break;
        case 3:
        cout<<"Three";
        break;
        case 4:
        cout<<"Four";
        break;
        case 5:
        cout<<"Five";
        break;
        case 6:
        cout<<"six";
        break;
        case 7:
        cout<<"seven";
        break;
        case 8:
        cout<<"eight";
        break;
        case 9:
        cout<<"nine";
        break;
        case 10:
        cout<<"Ten";
        break;
        default:
        cout<<"Enter a number between 1 and 10";
    }
    return 0;
}
