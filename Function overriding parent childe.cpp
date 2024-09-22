#include <iostream>
using namespace std;
class Parent{
	
	public:
	virtual void display(){
	  	cout<<"parent class "; 
	  }
	 	
};

class Child:public Parent{
	public:
		void display(){
			cout<<"child class";
		}
};
int main(){
	Parent *baseptr=new Child;
	baseptr ->display();
	
} 
