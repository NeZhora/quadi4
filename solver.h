#ifndef SOLVER_H_INCLUDED
#define SOLVER_H_INCLUDED

#include "common.h"

///@brief This function solves equations.
///@param double a, b and c - coefficents of the equation ax^2 + bx + c = 0
///@param double * k1 and k2.
///@attention *k1* and *k2* ARE NOT ROOTS OF THE EQUATION!
///They are *-b / (2a)* and *fabs(sqrt (D) / (2a))* respectfuly.
///This is made specificly for ease of outputing complex roots. Fabs in *k2* is
///there for cases, where *a* is negative to evade output like *-0.500000 + i * - 0.866478*.
///@return solve() returns ROOT_number constant
///according to number of roots equation has.

enum ROOT_number solve(double a, double b, double c, double* k1, double* k2);

#endif
