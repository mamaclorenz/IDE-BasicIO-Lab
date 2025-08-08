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

    yearTurn60 = currentYear + (60 - age);

    cout << "\nHello, " << fullName << "! You are " << age << " years old.\n";
    cout << "You will turn 60 years old in the year " << yearTurn60 << "." << endl;

    return 0;
}
