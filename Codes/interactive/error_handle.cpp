#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    while (!(cin >> number)) {
        cin.clear(); // Clear the error flag on cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the bad input
        cout << "Invalid input. Please enter a number: ";
    }
    cout << "You entered: " << number << endl;
    return 0;
}
