/*  01 
#include <iostream>
using namespace std;

class Top2; 

class Top1 {
private:
    int value = 100;

public:
    friend void findMax(Top1, Top2);
};

class Top2 {
private:
    int value = 200;

public:
    friend void findMax(Top1, Top2);
};

void findMax(Top1 t1, Top2 t2) {
    if (t1.value > t2.value) {
        cout << "Max value: " << t1.value << "\n";
    } else {
        cout << "Max value: " << t2.value << "\n";
    }
}

int main() {
    Top1 t1;
    Top2 t2;

    findMax(t1, t2);
}

*/

/* 02
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
*/
/*  03 
#include <iostream>
#include <cstring>

class Top {
private:
    char* x;

public:
    Top(const char* n) {
        x = new char[20];
        strcpy(x, n);
    }

    Top(const Top& obj) {
        x = new char[20];
        strcpy(x, obj.x);
    }

    void concat(const char* s) {
        strcat(x, s);
    }

    void show() const {
        std::cout << x << "\n";
    }

    ~Top() {
        delete[] x;
    }
};

int main() {
    Top t1("Vishal");
    Top t2(t1);

    t1.show();
    t2.show();

    t1.concat(" kushwah");
    t2.concat(" wardha");

    t1.show();
    t2.show();

}

*/

/* 04
#include <iostream>
using namespace std;

class Operators {
private:
    int marks;

public:
    Operators(int num = 0) { 
        marks = num;
    }

    Operators operator+(Operators obj) {
        Operators temp(marks + obj.marks);
        return temp;
    }

    void display() {
        cout << marks;
    }
};

int main() {
    Operators s1(21), s2(53), s3(31);
    Operators result = s1 + s2 + s3;
    result.display();
}
*/

/*  05 
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val = 0) {
        value = val;
    }

    Number operator+(const Number& num) const {
        return Number(value + num.value);
    }

    void display() const {
        cout << value;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number sum = n1 + n2;

    cout << "Sum: ";
    sum.display();

}
*/


