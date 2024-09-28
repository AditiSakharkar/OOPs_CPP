//dynamic polymorphism
//method overriding
//rules : 
/* 
same name
same parameters
it is possible through inheritance only
*/

#include <iostream>
using namespace std;

class animal{
    public:
    void speak(){
        cout<<"speaking "<<endl; ;
    }
};

class dog: public animal{
    public:
    void speak(){
        cout<<"barking "<<endl; ;
    }
};
int main()
{
    dog obj;
    obj.speak(); //barking
    
return 0;
}