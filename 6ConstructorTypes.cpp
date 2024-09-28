#include <iostream>
using namespace std;
  //this keyword
  //constructor
class hero{
    public:
    int life;
    char level;
    void print(){
        cout<<"life "<<this->life<<endl ;
        cout<<"level "<<this->level<<endl ;
    }

    //default constructor
    hero(){
        cout<<"default constructor"<<endl ;
    };

    //parametrized constructor
    hero(int life,char level){
        this->life=life;
        this->level=level;
    }
    //once you make your own constructor then default constructor will be removed.

    //copy constructor
    hero(hero &temp){
        this->life=temp.life;
        this->level=temp.level;
        cout<<"copy constructor"<<endl ;
    }

};

int main()
{
    hero perman(55,'t'); 
    cout<<"life "<<perman.life<<endl ;
    cout<<endl; ;

    hero S(99,'k');
    S.print();
    cout<<endl ;
    //copy constructor
    hero R(S);
    R.print();
    // R.life=S.life;
    // R.level=S.level;


//shallow : same hi memory ko do nam se access krna
//deep : copy bnti memory ki

return 0;
}