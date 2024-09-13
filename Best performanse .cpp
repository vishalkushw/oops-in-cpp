//Write a C++ program to define a class named Employee.
//private member: name, employee ID, dep ,designation,
//performance(bad-0,avg-1,good-2,very-good-3,best-4
// (use default constructor)
//public member functions:setter(),getter()

#include <iostream>
using namespace std;

class Employee{
	private :
		string name;
		int employeeID;
		string dep;
		string designation;
		int performance;
		
	public:
		Employee (){
			name="";
			employeeID=0;
			dep="";
			designation="";
			performance=0;
		}
		
	void setter(string n,int id ,string dp ,string deg ,int per){
			name=n;
			employeeID=id;
			dep=dp;
			designation=deg;
			performance=per;
		
	} 
	
	void getter(){
		cout<<"Name:"<<name<<endl;
		cout<<"Employee ID : "<<employeeID<<endl;
		cout<<"department:"<<dep<<endl;
		cout<<"Designation:"<<designation<<endl;
		cout<<"Performance"<<performance;
		switch (performance) {
            case 0:
                cout << "Bad" << endl;
                break;
            case 1:
                cout << "Average" << endl;
                break;
            case 2:
                cout << "Good" << endl;
                break;
            case 3:
                cout << "Very Good" << endl;
                break;
            case 4:
                cout << "Best" << endl;
                break;
            default:
                cout << "Invalid performance rating" << endl;
        }
	}
};
int main(){
	Employee emp;
	emp.setter("vishal",2345,"web developer","eng",4);
	emp.getter();
		
}
