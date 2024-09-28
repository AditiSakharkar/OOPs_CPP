#include <iostream>
using namespace std;
  //constructor
  // static key word -> belongs to class / obj bnane ki need nhi hoti
  //destructor->memory dellocation/ 
  //automatically created for static allocation /
  //for dynamic manually, use delete
class hero{
    public:
    int life;
    char level;

    //default constructor
    hero(){
        cout<<"default constructor"<<endl ;
    };

};

int main()
{
    cout<<"aa"<<endl ;

    //obj created statically
    hero perman; //perman.hero();
    //default constructor is called

    cout<<"bb"<<endl ;

    //obj created dynamically
    hero *h =new hero;

return 0;
}