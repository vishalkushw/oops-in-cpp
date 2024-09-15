#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id;    
       string name; 
       float salary;  
       Employee(int i, string n, float s)    
        {    
            id = i;    
            name = n;    
            salary = s;  
        }    
       void display()    
        {    
            cout<<"Employee ID : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : "<<salary<<endl;    
        }    
};  
int main() {  
    Employee e1 =Employee(101, "Vijay",55000); 
    Employee e2=Employee(102, "Vikash", 33456);   
    e1.display();    
    e2.display();    
} 
