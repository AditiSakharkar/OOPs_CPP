#include <iostream>
using namespace std;
   
class hero{
    public: //can access anywhere outside class
    int life;

    private: //access only within class
    char level;
    void print(){
        cout<<level ;
    }
};

int main()
{
    hero perman;
    cout<<"life remaining is "<<perman.life<<endl; //gives garbage value
    perman.life=50;
    cout<<"life remaining is "<<perman.life; //50
    //perman.print(); // cannot access because it is private

return 0;
}

//protected -> access inside own class or derived classs