#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue() {
    int value;
    if (rear == MAX - 1) {
        cout << "Queue is Full! Cannot insert element.\n";
    } else {
        cout << "Enter value to insert: ";
        cin >> value;

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
        cout << "Element inserted successfully.\n";
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty! Cannot delete element.\n";
    } else {
        cout << "Deleted element: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty.\n";
    } else {
        cout << "Queue elements are:\n";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << endl;
        }
    }
}

void isEmpty() {
    if (front == -1 || front > rear)
        cout << "Queue is Empty.\n";
    else
        cout << "Queue is Not Empty.\n";
}

void isFull() {
    if (rear == MAX - 1)
        cout << "Queue is Full.\n";
    else
        cout << "Queue is Not Full.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Check if Queue is Empty\n";
        cout << "5. Check if Queue is Full\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                isFull();
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
