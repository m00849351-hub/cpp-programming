#include <iostream>
using namespace std;

class Appliance  {
    public:
    virtual void turnOn() = 0;
};
class Fan : public Appliance {
    public:
    void turnOn() {
        cout << "Fan is spinning..." << endl;
    }
};
int main() {
    Appliance* myApp = new Fan();
    myApp->turnOn();
    return 0;
}
