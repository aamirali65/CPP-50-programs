#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    int choice;

    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            fahrenheit = (celsius * 9 / 5) + 32;
            cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5 / 9;
            cout << fahrenheit << " Fahrenheit = " << celsius << " Celsius" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
