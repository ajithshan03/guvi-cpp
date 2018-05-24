#include<iostream>
using namespace std;
int main()
{
  string str;
  getline(cin,str);
  for(int i = 0;i<str.length();i++){
    str[0] = toupper(str[0]);
    if(str[i]==' '){
        str[i+1] = toupper(str[i+1]);
    }
  }
  cout<<str;
  return 0;
}
