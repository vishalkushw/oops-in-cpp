/*copy constructer :-
 Shallow copy-: by bdefault clsss having a shallow copy structure we not create it and it share
 the adddress of exits object to a new one.
 classname objectname2 (objectname1) 
 
 object as a parameter in shallow copy 
*/

#include <iostream>
using namespace std;
class top
{
int n;
public:top(int a)
{
	n=a;
	
}
void show()
{
	cout<<"account no="<<n<<"\n";
}
	
};
int main(){
	top t1(23456);
	top t2(t1); //shallow copy
	t1.show();
	t2.show();
}
