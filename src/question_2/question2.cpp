#include "question2.h"
#include <cmath>

using std::round;


bool test_config()
{
    return true;
}

double get_dna_p_distance(const string& dna1, const string& dna2)
{
    double p_diff = 0, 
           p_distance;
    int dna_length = dna1.length();

    for (int i = 0; i < dna_length; i++) {
        if(dna1[i] != dna2[i]) {
            p_diff++;
        }
    }

    // round to 4 decimal places
    p_distance = round((p_diff/dna_length) * 10000) / 10000;
    return p_distance;
}