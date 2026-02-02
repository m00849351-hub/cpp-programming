#include <iostream>
#include <string>
using namespace std;

class student {
    public:
    string name;
    int roll;
    
    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};
int main() {
    student s1;
    s1.name = "Raj";
    s1.roll = 11;
    s1.display();
    return 0;
}
