#include<iostream>
#include<string>
#include "question4.h"

using std::cout, std::cin, std::string, std::tolower;

int main()
{
    string fib_sequence;
    char prompt;
    int num;

    do {
        cout << "FIBONACCI SEQUENCE CALCULATOR\n";
        cout << "Please enter a number between 1 and 15: ";
        cin >> num;

        if (num >= 1 && num <= 15) {
            fib_sequence = get_fib_sequence(num);
            cout << "The fibonacci sequence for " << num << " is " << fib_sequence;
        } else {
            cout << "Number is out of range, please try again.";
        }
        cout << "\n\n";
        cout << "Do you want to exit? (y/n): ";
        cin >> prompt;
        cout << "\n";
    } while(tolower(prompt) != 'y');

    return 0;
}