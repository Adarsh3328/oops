#include<iostream>
using namespace std;
class vikash{
     public:
     string a;
     int DOB;

     void printname();
     void printDOB(){
        cout<<"Date of Birth is ="<<" "<<DOB;
     }
};
void vikash::printname(){
    cout<<"Adarsh Surname is ="<<" "<<a;
}
int main(){
    vikash obj;
    obj.a = "MISHRA";
    obj.DOB =(28-11-2001);

    obj.printname();
    cout<<endl;
    obj.printDOB();
    return 0;
}
