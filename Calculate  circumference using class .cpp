//1)Write a C++ program to define a class named Circle.
//private member: radius
//public member functions:calculate_area(),calculate_circumference()


#include <iostream>
using namespace std;

class Circle{
	private :
		double radius;
	
	public:
		Circle (double r){
			radius=r;
		}
		
	 double calculate_area(){
	 	return 3.1415*radius*radius;
	 	
	 }	
	 
	double calculate_circumference(){
		return 2*3.1415*radius;
		
	} 
};
int main(){
	Circle c(6);
	cout<<"Area  : "<<c.calculate_area()<<endl;
	cout<<"Circumference   : "<<c.calculate_circumference();
	
}
