#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    int value;
    if (top == MAX - 1) {
        cout << "Stack is Full! Cannot push element.\n";
    } else {
        cout << "Enter value to push: ";
        cin >> value;
        top++;
        stack[top] = value;
        cout << "Element pushed successfully.\n";
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is Empty! Cannot pop element.\n";
    } else {
        cout << "Deleted element: " << stack[top] << endl;
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is Empty.\n";
    } else {
        cout << "Stack elements are:\n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

void isEmpty() {
    if (top == -1)
        cout << "Stack is Empty.\n";
    else
        cout << "Stack is Not Empty.\n";
}

void isFull() {
    if (top == MAX - 1)
        cout << "Stack is Full.\n";
    else
        cout << "Stack is Not Full.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Check if Stack is Empty\n";
        cout << "5. Check if Stack is Full\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
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
