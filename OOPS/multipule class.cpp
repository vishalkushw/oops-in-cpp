// multipule class 
#include <iostream>
using namespace std;

class top1{
	public:void show()
	{
		cout<<"top1 class show\n";
	}
	
};

class top2{
	public:void display(){
		cout<<"top2 display class\n";
	}
	
};


int main(){
	top1 t1;
	t1.show();
	top2 t2;
	t2.display();
}
