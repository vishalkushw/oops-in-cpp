#include <iostream>
using namespace std;

class PrivateData {
    private:
        int data;

    public:
        PrivateData(int value) {
            data = value;
        }
        
      friend class Accessor;  
};

class Accessor {
    public:
        void print(PrivateData obj) {
            cout << "Data: " << obj.data << endl;
        }
};

int main() {
    PrivateData pd(10);
    Accessor acc;
    acc.printn(pd);
}

