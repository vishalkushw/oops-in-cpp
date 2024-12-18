//multipule inheritance we can inherit more than one class at a time
#include  <iostream>
using namespace std;
class sbi {
	public:void sbishow()
	{
		cout<<"\nSBI class \n";
	}
};
class axis {
	public:void axisshow()
	{
		cout<<"\nAxios class \n";
	}
};
 class customber:public sbi,public axis
 {
 	public :void show()
 	{
 		cout<<"\n customber class";
	 }
 };
 

int main(){
	customber c ;
	c.show();
	c.sbishow();
	c.axisshow();
	
}
