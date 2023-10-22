#include<iostream>
using namespace std;
class vikash{
    public:
    string A;
    void printname(){
        cout<<"ADARSH"<<" "<<A;
    }
};
int main(){
    vikash obj;
    obj.A="MISHRA";
    obj.printname();
    return 0;
}