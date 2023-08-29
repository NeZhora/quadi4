#ifndef OUTPUT_H_INCLUDED
#define OUTPUT_H_INCLUDED

#include "common.h"

///@brief This function outputs roots, calculated by solve().
///@param double k1 and k2 outputed by solve().
///@param ROOT_number nroots returned by solve().
///@return output() returns 0, when it completes the job.
///The job itself is outputing roots of the equation.
/*********************************************************************************//**
*@return Depending on nroots function output() outputs:
*@return -Just k1 in case nroots is ONE_root
*@return -Both k1 + k2 and k1 - k2 in case nroots is TWO_roots
*@return -Message saying that there are no roots in case nroots is NONE_roots
*@return -Both k1 + i * k2 and k1 - i * k2 in case nroots is COMPLEX_roots
*@return -Message saying there are infinite number of roots in case nroots is INFINITE_roots
*@return In any other case output() prints an error message
*************************************************************************************/

int output(double k1, double k2, enum ROOT_number nroots);

#endif
