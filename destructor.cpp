#include <iostream>
using namespace std;

class Database {
    public:
    Database() { 
        cout << "Connection Opened." << endl;
        }
    ~Database() { 
        cout << "Connection Closed. Resourses Cleaned UP." << endl; 
    }
};
int main() {
    Database db;
    cout << "Performing operations..." << endl;
    return 0;
}
