/*we can use a function inside a class in two ways
1 Function declare and define inside a class
2 Function declare in a clss but define  outside of  class
*/
#include <iostream>
using namespace std;
class cybrom
{
	int a,b;
	public:
		void sum(int x,int y);
		int cube(int a);
};
void cybrom ::sum(int x ,int y )
{
	cout<<"sum : "<<x+y<<"\n";
}

int cybrom ::cube(int a)
{
	cout<<"Cube : "<<a*a*a<<"\n";
}
int main(){
	cybrom c;
	c.sum(4,6);
	c.cube(5);
}

