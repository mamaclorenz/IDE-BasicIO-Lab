#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int age, currentYear, yearTurn60;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the current year: ";
    cin >> currentYear;

    cout << "\nHello, " << fullName << "! You are " << age << " years old.\n";

    return 0;
}
