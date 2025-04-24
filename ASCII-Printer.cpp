#include <iostream>
#include <limits>  // For input validation
#include <cctype>  // For checking if the character is printable

using namespace std;

int main() {
    char c;

    cout << "=====================================" << endl;    
    cout << "== ASCII Value Finder ==" << endl;
    cout << "=====================================" << endl;

    while (true) {
        cout << "Please input a single character (a-z, A-Z, or special characters): ";
        cin >> c;

        // Check if input is a valid single character and ensure that it's a printable character
        if (cin.fail() || cin.peek() != '\n' || !isprint(c)) {
            cout << "Invalid input. Please enter a single, valid character." << endl;
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore any excess input
        } else {
            // Valid input; break out of the loop
            break;
        }
    }

    // Convert the character to its ASCII value
    int asciiValue = static_cast<int>(c);  // Safer casting

    // Output the ASCII value of the entered character
    cout << "The ASCII value of character '" << c << "' is: " << asciiValue << endl;

    return 0;
}
