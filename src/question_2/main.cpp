#include<iostream>
#include<string>
#include "question2.h"

using std::cout, std::string;

int main()
{
    string s1 = "GAGCCTACTAACGGGAT",
           s2 = "CATCGTAATGACGGCCT";

    cout << "\nThe P-Distance of the strings " << s1 << " and " << s2 << " is " << get_dna_p_distance(s1, s2) << "\n\n";
    return 0;
}