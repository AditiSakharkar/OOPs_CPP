#include <iostream>
using namespace std;
  //to access (get or set) private member we use getter and setter 
class hero{
    private:
    int life;

    public:
    char level;
  
    //getter -> to fetch
    int getlife(){
        return life;
    }
    char getlevel(){
        return level;
    }
    //setter -> any condition can be applied. we can check using if block.
    void setlife(int lf){
        life=lf;
    };
    void setlevel(int lv){
        level=lv;
    };
};

int main()
{
    hero perman;
    cout<<"life "<<perman.getlife()<<endl; //6422356
    cout<<"level "<<perman.getlevel()<<endl;

    perman.setlife(50);
    perman.setlevel('a');
    cout<<"life "<<perman.getlife()<<endl; //50
    cout<<"level "<<perman.getlevel()<<endl; //a

    cout<<"size of perman "<<sizeof(perman) ; //8
    //int and char should give 5 (4+1),why 8?
    //padding and greedy alignment.
    //Padding: Compilers add padding to maintain alignment. Each data type is aligned based on its size. For example, a 4-byte int is typically aligned on a 4-byte boundary.
    //Greedy Alignment: To reduce padding, place the largest data types first, followed by smaller types. This helps avoid unnecessary gaps in memory.

return 0;
}