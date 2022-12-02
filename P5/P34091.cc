/*
    Write a function that tells if a natural n is perfect.

    A natural number is called perfect if it is equal to
    the sum of all its divisors except itself. For instance,
    28 is perfect, because 28=1+2+4+7+14.
*/
#include <iostream>
using namespace std;

bool is_perfect(int x) {
    int sum_divisors = 1;
    for (int i = 2; i*i <= x; ++i) {
        if (x%i == 0) {
            sum_divisors += (i + x/i);
        }
    }

    return x == sum_divisors and x != 1;
}