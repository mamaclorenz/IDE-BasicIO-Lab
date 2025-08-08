#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int age, currentYear, yearTurn60;

    // Input section
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the current year: ";
    cin >> currentYear;

    // Calculation
    yearTurn60 = currentYear + (60 - age);

    // Output section
    cout << "\nHello, " << fullName << "! You are " << age << " years old.\n";
    cout << "You will turn 60 years old in the year " << yearTurn60 << "." << endl;

    return 0;
}