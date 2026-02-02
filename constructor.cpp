#include <iostream>
#include <string>
using namespace std;

class car {
    public:
    string brand;
    car(string b) {
        brand = b;
        cout << " object created!" << endl;
    }
};
int main() {
    car mycar("Tesla");
    return 0;
}
