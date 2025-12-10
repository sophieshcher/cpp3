#include <iostream>
#include <cmath>
using namespace std;

int main() {
//Task 1
double x, y;
cout << "--- Task 1 ---" << endl;
    while(true) {
        cout << "Enter x: "; 
        cin >> x;
        double abs_x = (x < 0) ? -x : x;

        if (abs_x > 2) {
            y = log(x*x - 4)/log(4) + 1/x;
            cout << "y = " << y << endl;
            break;
        } else {
            cout << "Invalid input" << endl;
        }
    }

//Task 2
cout << "--- Task 2 ---" << endl;
float num;
cout << "Enter your number: ";
cin >> num;

double abs_num = (num < 0) ? -num : num;

cout << "Absolute value: " << abs_num << endl;

//Task 3

cout << "--- Task 3 ---" << endl;
double A, N;  
cout << "Enter A: ";
cin >> A;
cout << "Enter N: ";
cin >> N;

cout << "Using for loop:" << endl;
double number = A;
    for (int i = 1; i <= 10; i++) {
        cout << number << " ";
        number *= N;
    }
    cout << endl;

cout << "Using while loop:" << endl;    
number = A;
    int i = 1;
    while (i <= 10) {
        cout << number << " ";
        number *= N;
        i++;
    }
    cout << endl;

cout << "Using do while loop:" << endl; 
number = A;
    i = 1;
    do {
        cout << number << " ";
        number *= N;
        i++;
    } while (i <= 10);
    cout << endl;

return 0;
}

