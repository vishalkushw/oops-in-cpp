/*
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void setRadius(double r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Radius must be positive.\n";
        }
    }

    double getRadius()  {
        return radius;
    }

    double calculateArea()  {
        return 3.141 * radius * radius;
    }

    double calculateCircumference()  {
        return 2 * 3.141* radius;
    }
};

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius); 

    cout << "Circle Radius: " << circle.getRadius() << "\n";
    cout << "Circle Area: " << circle.calculateArea() << "\n";
    cout << "Circle Circumference: " << circle.calculateCircumference() << "\n";

}
*/

/*
#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count; 

public:
    
    ObjectCounter() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int ObjectCounter::count = 0;

int main() {
    cout << "Object Count: " << ObjectCounter::getCount() << endl;

    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    cout << "Object Count 3 object : " << ObjectCounter::getCount() << endl;

    ObjectCounter obj4;

    cout <<"Object Count after creating another object: " << ObjectCounter::getCount() << endl;

}

*/

