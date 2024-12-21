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
