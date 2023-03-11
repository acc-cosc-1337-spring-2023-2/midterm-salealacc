#include "question1.h"

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
{
    double commission;

    if (sales > 0 && sales < 500) {
        commission = 0.05;
    }
    else if (sales >= 500 && sales < 1000) {
        commission = 0.06;
    }
    else if (sales >= 1000 && sales < 1500) {
        commission = 0.07;
    }
    else if (sales >= 1500) {
        commission = 0.08;
    } 
    else {
        commission = 0;
    }

    return sales * commission;
}