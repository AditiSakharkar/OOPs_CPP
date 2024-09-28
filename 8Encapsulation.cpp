//Wrapping up data members and functions into single unit
//single unit -> calss. class me sb daal diya.

//fully encapsulated class -> all data memebers are marked private.
//why encapsulation ?
//information hiding/data hiding --- security --- read only class --- unit testing

#include <iostream>
using namespace std;

class student{
private:
string name;
int age;

int getage(){
    return this->age;
}
};

int main()
{
    student first;
return 0;
}