#include<iostream>
#include "question3.h"

using std::cout, std::cin, std::tolower;

int main()
{
    int num_input, fib_num;
    char prompt;
    do {
        cout << "FIBONACCI NUMBER CALCULATOR\n";
        cout << "Please enter a number between 1 and 15: ";
        cin >> num_input;

        if (num_input >= 1 && num_input <= 15) {
            fib_num = get_fib_number(num_input);
            
            cout << "The fibonacci number for " << num_input << " is " << fib_num;
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