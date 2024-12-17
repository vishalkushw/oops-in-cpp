#include <iostream>

using namespace std;

class University {
protected:
    string name;

public:
    University(string n) : name(n) {}
    void displayUniversity() { cout << "University: " << name << endl; }
};

class College {
protected:
    string collegeName;

public:
    College(string cn) : collegeName(cn) {}
    void displayCollege() { cout << "College: " << collegeName << endl; }
};

class Department {
protected:
    string departmentName;

public:
    Department(string dn) : departmentName(dn) {}
    void displayDepartment() { cout << "Department: " << departmentName << endl; }
};

class Student : public University, public College, public Department {
private:
    string studentName;

public:
    Student(string n, string cn, string dn, string sn)
        : University(n), College(cn), Department(dn), studentName(sn) {}
    void displayStudent() { cout << "Student: " << studentName << endl; }
};

int main() {
    Student s("University of Mumbai", "College of Engineering", "Department of Computer Science", "vishal kushwah");
    s.displayUniversity();
    s.displayCollege();
    s.displayDepartment();
    s.displayStudent();
}

