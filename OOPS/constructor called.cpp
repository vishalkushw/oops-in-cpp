#include <iostream>
using namespace std;

class University {
public:
    University() {
        cout << "University constructor called\n";
    }

    ~University() {
        cout << "University destructor called\n";
    }

    void displayUniversity() {
        cout << "University\n";
    }
};

class Collage1 : virtual public University {
public:
    Collage1() {
        cout << "Collage1 constructor called\n";
    }

    ~Collage1() {
        cout << "Collage1 destructor called.\n";
    }

    void displayCollage1() {
        cout << "Collage1\n";
    }
};

class Collage2 : virtual public University {
public:
    Collage2() {
        cout << "Collage2 constructor called.\n";
    }

    ~Collage2() {
        cout << "Collage2 destructor called.\n";
    }

    void displayCollage2() {
        cout << "Collage2\n";
    }
};

class Student : public Collage1, public Collage2 {
public:
    Student() {
        cout << "Student constructor called\n" ;
    }

    ~Student() {
        cout << "Student destructor called\n";
    }

    void displayStudent() {
        cout << "Student\n";
    }
};

int main() {
    Student s1;
    s1.displayUniversity();
    s1.displayCollage1();
    s1.displayCollage2();
    s1.displayStudent();

}
