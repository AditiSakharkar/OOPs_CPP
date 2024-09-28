#include <iostream>
using namespace std;
    //class - user defined data type
    //object - instance of class
class hello{
    //properties
    int val;
};

//empty class
class emptyclass{

};

class hero{
    int life;
    char level;
};

int main()
{
    //object creation
    hello h1;
    cout<<"size "<<sizeof(h1)<<endl; //4

    emptyclass ec;
    cout<<"size "<<sizeof(ec); //1
    //for empty class size is assigned is 1

    hero perman;
    //cout<<"life remaining is "<<perman.life; 
    //throw error because of private data member.use access modifier


return 0;
}