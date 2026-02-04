#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int items[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is full
    bool isFull() {
        return (rear == SIZE - 1);
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Add element (Enqueue)
    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            items[rear] = element;
            cout << "Inserted " << element << endl;
        }
    }

    // Remove element (Dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Deleted " << items[front] << endl;
            if (front >= rear) { // Reset queue after last element is removed
                front = -1;
                rear = -1;
            } else {
                front++;
            }
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
                cout << items[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
