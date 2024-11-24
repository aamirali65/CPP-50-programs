#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string revStr = string(str.rbegin(), str.rend());

    cout << "Reversed string: " << revStr << endl;
    return 0;
}
