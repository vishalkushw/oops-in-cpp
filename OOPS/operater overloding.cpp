#include <iostream>
using namespace std;
class top{
	int x;
	public:top(int a){
		x=a;
	}
	void  operator ++(){
		x++;
		cout<<x;
	}
};
int main(){
	top t1(3);
	++t1;  	
}
