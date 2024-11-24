#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, revStr;
    cout << "Enter a string: ";
    cin >> str;

    revStr = string(str.rbegin(), str.rend());

    if (str == revStr)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
