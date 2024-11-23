#include <iostream>
using namespace std;
int a=12;
class hacker{
	int b=20;
	public:void virus()
	{
		cout<<b;
	}
	
};

class user{
	
	public:void reward(){
		cout<<a;
	
	}
	void fun(){
		cout<<a;
	}
	
};


int main(){
	user crust;
	crust.hacker();
	crust.reward();
	fun();
	
}

