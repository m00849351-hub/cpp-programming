#include <iostream>
using namespace std;
int main() {
    int n;
    long long factorial = 1;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    
    if(n < 0) {
        cout << "Error! Factorial of a negative doesn't exist.";
    } else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }
    return 0;
}
