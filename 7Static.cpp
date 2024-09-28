#include <iostream>
using namespace std;
 
  // static key word -> belongs to class / obj bnane ki need nhi hoti
  //static functions -> no need to create object / no this keyword is used / can access only static members
class hero{
    public:
    int life;
    char level;
    static int timetocomplete;

    static int random(){
        return timetocomplete ;
    }
};
//datatype class_name :: name = value; 
int hero::timetocomplete=5;

int main()
{
    cout<<hero::timetocomplete<<endl ;
    cout<<hero::random()<<endl ;
return 0;
}

//in game hero and enemy and other entities will hav same timetocomplete. thus it is object independent.all entities in class will fillow same time.

//static variable in function. memory is allocated once and is not reinitialized. 
//The variable count is not getting initialized every time the function is called.
// void demo()
// {   / static variable
//     static int count = 0;
//     cout << count << " ";
//     / value is updated and
//     / will be carried to next
//     / function calls
//     count++;
// }
// int main()
// {
//     for (int i = 0; i < 5; i++)
//         demo();
//     return 0;
// }
// Output
// 0 1 2 3 4 