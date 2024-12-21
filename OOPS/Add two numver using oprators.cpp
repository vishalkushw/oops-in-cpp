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
