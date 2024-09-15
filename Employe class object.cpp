#include <iostream>
using namespace std;

class Employe{
	private:
		string name;
		int empID;
		int salary;
		
	public:
	   Employe(string nm,int id,int sl){
	   	name=nm;
	   	empID=id;
	   	salary=sl;
	   }
	   
	   void display(){
	   	cout<<"Name: "<<name<<endl;
	   	cout<<"EmpID: "<<empID<<endl;
	   	cout<<"salary: "<<salary;
	   }	
};
int main(){
	Employe st("Vishal kushwah",1020,55000);
	st.display();	
}
