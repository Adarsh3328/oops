#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<level<<endl;  
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
};
int main(){
    //creation of object
    Hero ramesh;
    cout<<"Ramesh Health"<<ramesh.getHealth()<<endl;
    //use setter
    ramesh.setHealth(77);
    //ramesh.health=77;
    ramesh.level='A';
    cout<<"health is "<<ramesh.getHealth()<<endl;
    cout<<"level is "<<ramesh.level<<endl;
    return 0;
}