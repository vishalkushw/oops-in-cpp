/* Write a C++ program to demonstrate multiple inheritance by creating a
class cuboid which extends class rectangle, class shape. It calculates area
 and volume. Use appropriate constructors and member variables? */
 
#include <iostream>
using namespace std;

class Shape {
protected:
    double length;
    double breadth;

public:

    Shape(double l, double b) : length(l), breadth(b) {}

    virtual double calculateArea() {
        return 0;  
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double l, double b) : Shape(l, b) {}

    double calculateArea() override {
        return length * breadth;  
    }
};

class Cuboid : public Rectangle {
private:
    double height; 

public:
    Cuboid(double l, double b, double h) : Rectangle(l, b), height(h) {}

    double calculateVolume() {
        return length * breadth * height; 
    }

    void display() {
        cout << "Area of the base (Rectangle): " << calculateArea() << endl;
        cout << "Volume of the Cuboid: " << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboid(5.0, 4.0, 3.0);
    cuboid.display();
}

