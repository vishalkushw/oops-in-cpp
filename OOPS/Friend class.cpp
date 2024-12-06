/*Friend class :- With the hepl of friend class we can access  variable use  other class 
*/
#include <iostream> 
using namespace std;
class sbi{
	int amount =45000;
	void balance()
	{
		cout<<"Balance"<<amount<<"\n";
	}
	friend class axis;
};
class axis{
	public :void show(sbi sk){
		cout<<"amount of sbi="<<sk.amount<<"\n";
		
	}
};

int main(){
	sbi s;
	axis a;
	a.show(s);
	
}
