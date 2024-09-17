/*Write a program the Shape class is defined by two pure virtual member
functions:calculateArea() and calculatePerimeter().These functions are
 meant to be overridden by derived classess.The Circle class is derived
from Shape and overrides the virtual functions to calculate the area and
 perimeter of a Circle.*/
 
 #include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0; 
    virtual double calculatePerimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() override {
        return 3.14 * radius * radius;  // Area = p * r^2
    }

    double calculatePerimeter() override {
        return 2 * 3.14 * radius;  // Perimeter = 2 * p * r
    }
    
    void display(){
    cout << "Area of the Circle: " <<calculateArea()<<endl;
    cout<<"Perimeter of the Circle: "<<calculatePerimeter()<<endl;
	}
};

int main() {
    Circle circle(5.0);
    circle.display();

    
}

