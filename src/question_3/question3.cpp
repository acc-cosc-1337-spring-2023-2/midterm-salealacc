#include "question3.h"
#include<algorithm>

bool test_config()
{
    return true;
}

int get_fib_number(int num)
{
    int currentNum = 0, prevNum1 = 0, prevNum2 = 1;
    for(int i = 0; i <= num; i++) {
        currentNum += prevNum1;
        prevNum1 = prevNum2;
        prevNum2 = currentNum;
    }
    return currentNum;
}