#include<iostream>
#include "question1.h"

using std::cout, std::cin, std::tolower;

int main()
{
    double sales_amount, sales_commission;
    char again;

    do {
        cout << "COMMISSION CALCULATOR\n";
        cout << "Please input the sales amount: ";
        cin >> sales_amount;

        sales_commission = get_sales_commission(sales_amount);

        cout << "Sales of " << sales_amount << " yield a commission of " << sales_commission << ".\n\n";

        cout << "Do you want to exit? (y/n): ";
        
        cin >> again;  
        cout << "\n";
    } while (tolower(again) != 'y');

    return 0;
}