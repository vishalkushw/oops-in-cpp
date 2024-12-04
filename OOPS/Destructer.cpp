/*
 Destructer:- it is use to dealocate the memory of an ockypie object
*/

#include <iostream>
using namespace std;
class top{
	int x=10;
	public:top(){
	cout<<x;
	}
	~top(){
	cout<<"\nmemory delete";
}
};

int main(){
	top t;	
}
