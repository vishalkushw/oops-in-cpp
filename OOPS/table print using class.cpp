#include <iostream>
using namespace std;
class top
{
	public:static void table(int a)
	{
		for(int i=1;i<=10;i++){
			cout<<a*i<<"\n";
		}
	}
};

int main(){
	top::table(4);
	
}
