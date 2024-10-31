#include <iostream>

using namespace std;

int main() {
    int age;
    double pay;
    char section;
    cout << "Enter age, pay, and section: ";
    cin >> age >> pay >> section;
    int result1 = 28 / 4 - 2;
    int result2 = 6 + 12 * 2 - 8;
    int result3 = 4 + 8 * 2;
    int result4 = 6 + 17 % 3 - 2;
    int result5 = 2 + 22 * (9 - 7);
    int result6 = (8 + 7) * 2;
    int result7 = (16 + 7) % 2 - 1;
    int result8 = 12 / (10 - 6);
    int result9 = (19 - 3) * (2 + 2) / 4;
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;
    cout << "Result 4: " << result4 << endl;
    cout << "Result 5: " << result5 << endl;
    cout << "Result 6: " << result6 << endl;
    cout << "Result 7: " << result7 << endl;
    cout << "Result 8: " << result8 << endl;
    cout << "Result 9: " << result9 << endl;

    return 0;
}