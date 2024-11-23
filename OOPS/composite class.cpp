// composite class 
#include <iostream>
using namespace std;

class hacker{
	public:void virus()
	{
		cout<<"your system got hacked\n";
	}
	
};

class user{
	hacker h;
	public:void reward(){
		cout<<"you won rs 2000000 in lottery system\n";
		h.virus();
	}
	
};


int main(){
	user crust;
	crust.reward();
}

