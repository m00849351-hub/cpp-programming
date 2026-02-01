#include <iostream>
#include <string>

using namespace std;

int main() {
int age;
string city_name;

cout << "Enter your age: ";
cin >> age;

cout << "Enter your city name: ";

getline(cin, city_name);

//Display the stored information
cout << "Your age is: " << age << endl;
cout << "Your lives in: " << city_name << endl;

return 0;
}
