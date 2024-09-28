#include <iostream>
using namespace std;
  
class hero{
    public:
    int life;
    char level;

    void setlevel(int lv){
        level=lv;
    };
};

int main()
{
    //static allocation
    hero a;
    cout<<"life "<<a.life<<endl;
    cout<<"level "<<a.level<<endl;
    a.setlevel('a');
    cout<<"level "<<a.level<<endl;

    //dynamic allocation
    hero *b = new hero;
    cout<<"life "<<(*b).life<<endl;
    cout<<"level "<<(*b).level<<endl;
    cout<<"level "<<b->level<<endl;
    b->setlevel('b');
    cout<<"level "<<b->level<<endl;
   

return 0;
}