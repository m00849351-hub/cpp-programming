#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " element: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of element: " << sum << endl;
    return 0;
}
