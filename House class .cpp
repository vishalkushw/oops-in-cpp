
#include <iostream>
using namespace std;

class House {
    string house_name;
    string address;
public:
    House(string hn, string add) {
        house_name = hn;
        address = add;
    }
    void display() {
        cout << "House name : " << house_name << endl;
        cout << "Address : " << address << endl;
    }
};

int main() {
    House hous("Ramniwash", "Indore");
    hous.display();
    return 0;
}
