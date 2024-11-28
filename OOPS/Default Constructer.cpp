/*Constructer :- alocates the memory of an object a class bydefault constructer exists in each 
end evey clss there are two typ of  Constructer 
1 default Constructer 
2 Parameterised  Constructer
3 Copy Constructer     shallow copy     deep copy

Distructer :- it is use to dealocate the memory of the class 


Constructer does have not any return type 
Constructer is also called special function
every Constructer have public modifier
*/

// 1 Default Constructer

#include <iostream>
using namespace std;
class student
{
	public :student()
	{
	cout<<"Allocate memory";
   }
	
};

int main(){
	student r;
	
}
