#include <iostream>

using namespace std;
class warriors{
    public:
    int ninja,opponentNinja,temp;
    int getNumber(){
        cout<<"Enter the kabali ninja number :";
        cin>>ninja;
    }
    int checking(){
        cout<<"Enter the opponent ninja number :";
        cin>>temp;
        if(temp > ninja){
            opponentNinja = temp;
        }else{
            cout<<"opponent Ninja should be greater than kabali's"<<endl;
            checking();
        }
    }
    int calculation(){
        ninja = opponentNinja - ninja;
        cout<<ninja;
    }
};
int main()
{
    warriors s;
    s.getNumber();
    s.checking();
    s.calculation();
    return 0;
}
