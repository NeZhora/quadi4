#ifndef GLOBAL_H
#define GLOBAL_H



enum ROOT_number
///ROOT_number is enumeration for number of roots. Names of constants kinda tell everything by themselfes.
{   /// Infinite number of roots
    INFINITE_roots = 3,
    /// Two real roots
    TWO_roots = 2,
    /// One real root
    ONE_root = 1,
    /// No roots exist, compex or real
    NONE_roots = 0,
    /// Two complex roots
    COMPLEX_roots = -1
};

/// Constant epsilon is margin for error. It is equal to 10^-8.
const double epsilon = 1e-8;

#endif
