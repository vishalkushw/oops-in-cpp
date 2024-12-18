/* operater overloding :-  operater overloding is use to redefine the nature of oprater for 
   non primitive datatype 
   there are two type of  operater overloding  
 1)unary operater overloding
 2)binary operater overloding
	it is used the solve the complex datatype
  

 it is work only primitive data type it is not work on non primitive 
   data type  opratater overloding need when we work on non primitive datatype on perform 
	arthmathic  operation
*/   

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
