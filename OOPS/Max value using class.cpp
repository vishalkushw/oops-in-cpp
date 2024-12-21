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

