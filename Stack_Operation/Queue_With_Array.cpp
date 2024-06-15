#include <iostream>

using namespace std;

int queue[100];
int rear = -1;
int front = -1;
const int n = 100;

void insert() {
    int value;

    if (rear == n - 1) {
        cout << "Queue is Overflow" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        cout << "Insert the Element in Queue: ";
        cin >> value;
        rear++;
        queue[rear] = value;
    }
}

void deQueue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Underflow" << endl;
    } else {
        cout << "Element deleted from Queue is: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue Elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "1. Insert Element to Queue" << endl;
        cout << "2. Delete Element from Queue" << endl;
        cout << "3. Display Elements in Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                deQueue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
