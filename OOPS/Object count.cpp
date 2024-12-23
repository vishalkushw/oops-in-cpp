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

