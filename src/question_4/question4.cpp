#include<string>

using std::string, std::to_string;

bool test_config()
{
    return true;
}

string get_fib_sequence(int num) 
{
    string fib_sequence;
    int currentNum = 0, prevNum1 = 0, prevNum2 = 1;

    for(int i = 0; i <= num; i++) {
        currentNum += prevNum1;
        prevNum1 = prevNum2;
        prevNum2 = currentNum;

        fib_sequence.append(to_string(currentNum));
        
        if (i != num) fib_sequence.append(" ");
    }
    return fib_sequence;
}