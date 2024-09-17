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

