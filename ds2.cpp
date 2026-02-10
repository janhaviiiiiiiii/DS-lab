#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, ch;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    while (1) {
        cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Inverse(2x2)\n6.Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch) {

        case 1: // Addition
            if (r1 == r2 && c1 == c2) {
                for (int i = 0; i < r1; i++)
                    for (int j = 0; j < c1; j++)
                        c[i][j] = a[i][j] + b[i][j];

                cout << "Addition:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                }
            } else
                cout << "Addition not possible";
            break;

        case 2: // Subtraction
            if (r1 == r2 && c1 == c2) {
                for (int i = 0; i < r1; i++)
                    for (int j = 0; j < c1; j++)
                        c[i][j] = a[i][j] - b[i][j];

                cout << "Subtraction:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                }
            } else
                cout << "Subtraction not possible";
            break;

        case 3: // Multiplication
            if (c1 == r2) {
                for (int i = 0; i < r1; i++)
                    for (int j = 0; j < c2; j++) {
                        c[i][j] = 0;
                        for (int k = 0; k < c1; k++)
                            c[i][j] += a[i][k] * b[k][j];
                    }

                cout << "Multiplication:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c2; j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                }
            } else
                cout << "Multiplication not possible";
            break;

        case 4: // Transpose
            cout << "Transpose of first matrix:\n";
            for (int j = 0; j < c1; j++) {
                for (int i = 0; i < r1; i++)
                    cout << a[i][j] << " ";
                cout << endl;
            }
            break;

        case 5: // Inverse (2x2)
            if (r1 == 2 && c1 == 2) {
                int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
                if (det != 0) {
                    cout << "Inverse:\n";
                    cout <<  a[1][1] << "/" << det << "  " << -a[0][1] << "/" << det << endl;
                    cout << -a[1][0] << "/" << det << "  " <<  a[0][0] << "/" << det << endl;
                } else
                    cout << "Inverse not possible";
            } else
                cout << "Only 2x2 matrix supported";
            break;

        case 6:
            return 0;

        default:
            cout << "Invalid choice";
        }
    }
}