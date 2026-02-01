#include <iostream>
using namespace std;
int main() {
    int n, reverse_number = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    
    while(n != 0) {
        remainder = n % 10;
        reverse_number = reverse_number * 10 + remainder;
        n /= 10;
    }
    cout << "Reverse Number = " << reverse_number;
    return 0;
}
