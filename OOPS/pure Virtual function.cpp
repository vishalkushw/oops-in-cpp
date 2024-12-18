/*pure virtual function :-pure virtual function initilize by 0 a class which content a pure virtual
functin is called abbtract class and we have to overite  pure virtual function in each childe class
otherwise it will not allow to allocate the memory object of a childe class
*/
#include <iostream>
using namespace std;

class RBI{
	public:virtual void helpdesk()=0;
	void fun()
	{
		cout<<"\n";
	}
};
class SBI:public RBI
{
public :void loan()
{
	cout<<"\nInterest rate 9%";
	}	
	void helpdesk()
	{
		cout<<"\n SBI May i help you";
	}
};

class AXIS:public RBI
{
public :void loan()
{
	cout<<"\nInterest rate 12%";
	}	
	void helpdesk()
	{
		cout<<"\n AXIS May i help you";
	}
};

int main(){
	RBI *r;
	SBI s;
	r=&s;
	r->helpdesk();
	AXIS a;
	r=&a;
	r->helpdesk();
	
}
