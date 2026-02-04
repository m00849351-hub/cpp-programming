#include <iostream>
using namespace std;

#define MAX 5

class Stack {
     public:
    int top;
    int arr[MAX];

    Stack() { top = -1; }
    void push(int x) {
        if(top >=(MAX - 1)) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }
    void display() {
        if(top < 0) return;
        cout << "Stack element: ";
        for(int i = top; i >= 0; i--)
        cout << arr[i] << " ";
        cout << endl;
    }
};
int main() {
    Stack s;
    s.push(10);
     s.push(20);
      s.push(30);
       s.display();
       s.top;
        s.display();
        return 0;
}
