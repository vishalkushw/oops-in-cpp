//Write a C++ program to define a class named  Rectangle.
//private member:length and width
//public member functions:calculate_area(),calculate_perimeter()

#include <iostream>
using namespace std;

class Rectangle{
	private :
		double length,width;
	
	public:
		Rectangle (double l ,double b){
			length=l;
			width=b;
		}
		
	 double calculate_area(){
	 	return length*width;
	 	
	 }	
	 
	double calculate_perimeter(){
		return 2*(length+width);
		
	} 
};
int main(){
	Rectangle r(6,5);
	cout<<"Area : "<<r.calculate_area()<<endl;
	cout<<"Circumference : "<<r.calculate_perimeter();
	
}
