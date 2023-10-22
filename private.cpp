#include<iostream>
using namespace std;
class Hero{
    //properties
    public:
    int health;
    private:
    char level;
    void print(){
        cout<<level<<endl;  // in this line is easily access private properties due to inside the class
    }
};
int main(){
    //creation of object
    Hero ramesh;
    cout<<"health is "<<ramesh.health<<endl;
    cout<<"level is "<<ramesh.level<<endl;  // in this line show error due to private because acess can prevent outside a class.
    return 0;
}