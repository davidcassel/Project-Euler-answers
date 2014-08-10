/**
 * Euler1.c
 *
 * Project Euler - Problem 1
 * https://projecteuler.net/problem=1
 *
 * "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, $
 * Find the sum of all the multiples of 3 or 5 below 1000."
 */


#include <stdio.h>
int main (void) {

    int x;
    int total;
    for (x = 1; x < 1000; x++ ) {

        if ( (x % 3 == 0) || (x % 5 == 0) ) total += x;

    }

    printf("%d\n", total);

}
