#include <math.h>
#include "compares.h"
#include "solver.h"

enum ROOT_number solve(double a, double b, double c, double* k1, double* k2)
{
  if(is_double_equal(a, 0))
  {
    if(is_double_equal(b, 0))
    {
      if(is_double_equal(c, 0))
      {
        return INFINITE_roots;
      }
      else
      {
        return NONE_roots;
      }
    }
    else
    {
      *k2 = 0;
      *k1 = -c/b;
      return ONE_root;
    }
  }
  else
  {
    double D = b*b-4*a*c;
    *k1 = -b/(2*a);

    if(double_bigger_than(D, 0))
    {
      *k2 = fabs(sqrt(D)/(2*a));
      return TWO_roots;
    }
    else if(is_double_equal(D, 0))
    {
      return ONE_root;
    }
    else
    {
      *k2 = fabs(sqrt(-D)/(2*a));
      return COMPLEX_roots;
    }
  }
}
