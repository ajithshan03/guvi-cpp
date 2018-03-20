#include <iostream>
using namespace std;

int main()
{
  string str1,str2;
  int set=0;
  cout<<"enter the strings :";
  cin>>str1>>str2;
  for(int i=0; i <= str1.length()-1;i++){
      if(str1[i] == str2[i]){
          set = 1;
      }else if(str1[i] > str2[i]){
          cout<<str1;
          set = 0;
          break;
      }else{
        cout<<str2;
        set = 0;
        break;
    }
  }
  if(set == 1){
      cout<<str1<<" "<<str2;
  }
}
