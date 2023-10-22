#include<iostream>
using namespace std;
class Hero{
    //properties
    public:
    int health;
    char level;
};
int main(){
    //creation of object
    Hero ramesh;
    cout<<"health is "<<ramesh.health<<endl;
    cout<<"level is "<<ramesh.level<<endl;
    return 0;
}