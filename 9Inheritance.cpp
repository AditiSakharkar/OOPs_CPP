#include <iostream>
using namespace std;
//super class / parent class
//subclass / child class

//mode of inheritance -> access modifiers--public private protected

//private data member of superclass cannot be inherited
/*
parent---child--- inherited as/considered

public   public      public
public   private     private
public   protected   protected

protected   public     protected
protected   private    private
protected   protected  protected 

private     public     not accessible
private     private    na
private     protected  na

*/

class human{
    public:
    int height;
    int wt;
    int age;

    public:
    int getage(){
        return this->age;
    }
    void setwt( int w){
        this->wt = w;
    }
};

class male: public human{
    public:
    int colour;
    void sleep(){
        cout<<"male is sleeping" ;
    }
};


int main()
{
    male obj1;

    cout<<obj1.wt <<endl ;

    cout<<obj1.colour <<endl;
    obj1.sleep() ;

    obj1.setwt(55);
    cout<<obj1.wt <<endl ;
    
return 0;
}