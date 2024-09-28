//existing in multiple forms
//types-> compile time poly , run time poly

//compile time polymorphism//

//function overloading
/*
void hello(){} & void hello(string name){} ALLOWED
void hello(){} & int hello(){}  NOT ALLOWED
void hello(string name){} & int hello(string name , int n){}   ALLOWED
*/

//operator overloading
/*
   + -> conacte, add
   syntax : return type operator <operator> (ip){}

*/

#include <iostream>
using namespace std;

class A{
public:
void hello(){
    cout<<"hello A"<<endl ;
}
void hello(string name){
    cout<<"hello "<<name<<endl ;
}

};
int main()
{
    A obj;
    obj.hello();
    obj.hello("polymorphism");
    
return 0;
}