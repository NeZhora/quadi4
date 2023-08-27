#ifndef COMPARES_H_INCLUDED
#define COMPARES_H_INCLUDED

#include "common.h"
///@brief This function compares two double numbers a and b with precision of epsilon (see common.h)
///@param double_bigger_than() resieves two double numbers a and b.
///@return double_bigger_than() returns 1 if a>b and 0 otherwise.
int double_bigger_than(double a, double b);
///@brief This function checks if two double numbers a and b are equal within margin of epsilon (see common.h)
///@param double_bigger_than() resieves two double numbers a and b.
///@return double_bigger_than() returns 1 if a equals b and 0 otherwise.
int is_double_equal(double a, double b);

#endif
