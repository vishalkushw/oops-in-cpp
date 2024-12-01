//its get copy the content of privious object into a new object and creacte a new memory
#include <iostream>
using namespace std;
#include <string.h>
class top
{
char *x;
public:top(char *n)
{
	x=new char[20];
	strcpy(x,n);
	
}
top(top &ob){
x=new char[20];
strcpy(x,ob.x);
}
void concat(char *s)
{
	strcat(x,s);
}
void show(){
	cout<<"Name="<<x<<"\n";
}
	
};
int main(){
	top t1("Vishal");
	top t2(t1); 
	t1.show();
	t2.show();
	t2.concat("kumar");
	cout<<"tittle with t2\n";
	t2.show();
	cout<<"tittle with t2\n";
	t1.show();
}
