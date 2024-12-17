
#include  <iostream>
using namespace std;
class sbi {
	public:void sbishow()
	{
		cout<<"\nSBI memory allocated \n";
	}
	~sbi()
	{
		cout<<"\nSBI memory deallocated \n";
	}
	
};
class axis {
	public:void axisshow()
	{
		cout<<"\nAxis memory allocated \n";
	}
	~axis()
	{
		cout<<"\nAxis memory deallocated \n";
	}
};
 class customber:public sbi,public axis
 {
 		public:void show()
	{
		cout<<"\ncustomber memory allocated \n";
	}
	~customber()
	{
		cout<<"\ncustomber memory deallocated \n";
	}
 };
 

int main(){
	customber c ;
	c.show();
	c.sbishow();
	c.axisshow();
	
}
