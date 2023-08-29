#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include "common.h"
///@brief test1() is function for testing, if solve() function works correctly.
///@param double a, b and c which are coefficents of the equation
///we want to test solve() on,
///@param double ref_k1 and ref_k1 that are precalculated correct values of
///k1 and k2
///@param ROOT_number ref_roots which is correct number of roots.
///@return test1() returns 1 and prints 'ok' if k1, k2 and roots are equal
///to ref_k1, ref_k2 and ref_roots, and prints allert message and returns 0 otherwise.
int test1(double a, double b, double c,
          double ref_k1, double ref_k2, enum ROOT_number ref_roots);
///@brief alltests() runs test1() multipule times to chek if solve() function works correctly.
///@param alltests() recieves nothing...
///@return After all tests are ran, alltests() prints total number
///of succsesfuly completed tests and returns 0.
int alltests(void);

#endif
