#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    char level;
    Hero(){  //creation own constructor
        cout<<"constructor"<<endl;
    }
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
    //object create statically
    cout<<"Hi"<<endl;
    Hero ramesh;
    cout<<"Hello"<<endl;
    
    //dynamically
    Hero *h = new Hero();
    return 0;
}