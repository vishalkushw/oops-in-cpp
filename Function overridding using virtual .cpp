//function overridding
#include <iostream>
using namespace std;

class Parent{
    public:
    virtual void display(){
    cout<<"Parent Class \n";
}
};
class Child:public Parent{
public:
 void display(){
    cout<<"Child class \n";
 }
};
int main(){
Parent *baseptr=new Child;
baseptr->display();
baseptr->Parent::display();

}
