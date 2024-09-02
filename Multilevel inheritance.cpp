#include<iostream>
using namespace std;

class School{
public:
    string school_name;
    string address;
    int fees;

    School(string sn, string add, int fs) {
        school_name = sn;
        address = add;
        fees = fs;
    }
};

class StudentDetails : public School{
protected:
    string student_name;
    int roll_number;
    int clss;

public:
    StudentDetails(string sn, string add, int fs, string stn, int roln, int cls) : School(sn, add, fs) {
        student_name = stn;
        roll_number = roln;
        clss = cls;
    }
};

class Student : public StudentDetails{
public:
    Student(string sn, string add, int fs, string stn, int roln, int cls)
	 : StudentDetails(sn, add, fs, stn, roln, cls) {
	 
	 }

    void display(){
        cout << "School name: " << school_name << endl;
        cout << "Address: " << address << endl;
        cout << "Fees: " << fees << endl;
        cout << "Student name: " << student_name << endl;
        cout << "Roll number: " << roll_number << endl;
        cout << "Class: " << clss << endl;
    }
};

int main(){
    Student st("Sam", "Bhopal", 40000, "Vishal", 1020, 12);
    st.display();
}
