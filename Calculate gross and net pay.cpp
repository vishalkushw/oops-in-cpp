/* Write a program to calculate gross and net pay of employee from basic 
salary.Create employee class which consists of employee name, emp_id,
and basic salary as its data members. Use parameterized constructor in 
the derived class to initialize data members of the base class and 
calculate gross and net pay of the employee in the derived class? */

#include <iostream>
using namespace std;

class Employee {
protected:
    string emp_name;
    string emp_id;
    float basic_salary;

public:
    Employee(string name, string id, float salary) {
        emp_name = name;
        emp_id = id;
        basic_salary = salary;
    }
};

class Salary : public Employee {
public:
    Salary(string name, string id, double salary) : Employee(name, id, salary) {}

    double calculate_gross_pay() {
        double hra = 0.20 * basic_salary; // HRA = 20% of basic salary
        double da = 0.50 * basic_salary;  // DA = 50% of basic salary
        double gross_pay = basic_salary + hra + da;
        return gross_pay;
    }

    double calculate_net_pay() {
        double gross_pay = calculate_gross_pay();
        double tax = 0.10 * gross_pay; // Tax = 10% of gross pay
        double net_pay = gross_pay - tax;
        return net_pay;
    }

    void display() {
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Gross Pay: " << calculate_gross_pay() << endl;
        cout << "Net Pay: " << calculate_net_pay() << endl;
    }
};

int main() {
    Salary emp1("Vishal", "TCS456", 50000);
    emp1.display();
}



// Deep copy
#include <iostream>
using namespace std;

class School {
private:
    int *roll;
    string school_name;
    string address;
public:
    School(int r, string sch, string add) {
        school_name = sch;
        address = add;
        roll = new int;
        *roll = r;
    }

    // Deep copy constructor
    School(const School &s1) {
        school_name = s1.school_name;
        address = s1.address;
        roll = new int; // Allocate new memory
        *roll = *s1.roll;
    }

    void change_roll(int d) {
        *roll = d;
    }

    void display() {
        cout << "Roll number: " << *roll << endl;
        cout << "School: " << school_name << endl;
        cout << "Address: " << address << endl;
        cout << endl;
    }

   
};

int main() {
    School s1(101, "SVK", "Bhopal");
    s1.display();

    School s2(s1);
    s2.display();

    s2.change_roll(102);
    s1.display();
    s2.display();

}


// Shallow copy
#include <iostream>
using namespace std;

class School {
private:
    int roll;
    string school_name;
    string address;

public:
    School(int r, string sch, string add) {
        school_name = sch;
        address = add;
        roll = r;
    }

    // Shallow copy constructor
    School(const School &s1) {
        school_name = s1.school_name;
        address = s1.address;
        roll = s1.roll;
    }

    void change_roll(int d) {
        roll = d;
    }

    void display() {
        cout << "Roll number: " << roll << endl;
        cout << "School: " << school_name << endl;
        cout << "Address: " << address << endl;
        cout << endl;
    }
};

int main() {
    School s1(101, "kvs", "Bhopal");
    s1.display();

    School s2(s1);
    s2.display();

    s2.change_roll(102);
    s1.display();
    s2.display();
}
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

/* Write a C++ program to create two objects of a class called company 
and add their data members using an operator overloaded function for "+"? */

#include <iostream>
using namespace std;

class Company {
private:
    int employees;
    double revenue;

public:

    Company(int emp, double rev) : employees(emp), revenue(rev) {}

    // Default constructor
    Company() : employees(0), revenue(0.0) {}

    Company operator+(const Company& other) {
        Company temp;
        temp.employees = this->employees + other.employees;
        temp.revenue = this->revenue + other.revenue;
        return temp;
    }

    void display() {
        cout << "Employees: " << employees << endl;
        cout << "Revenue: " << revenue << endl;
    }
};

int main() {
    Company company1(100, 50000.50);
    Company company2(150, 75000.75);

    cout << "Company 1 details:" << endl;
    company1.display();

    cout << "\nCompany 2 details:" << endl;
    company2.display();

    Company mergedCompany = company1 + company2;

    cout << "\nMerged Company details:" << endl;
    mergedCompany.display();

}


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




