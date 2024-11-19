#include <iostream>
using namespace std;

class Sum{
	int a=30;
	int b=40;
	public:void add()
	{
		cout<<"Add Two Number : "<<a+b;
	}
	
};
int main(){
	Sum num;
	num.add();	
}
