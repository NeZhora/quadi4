#include <math.h>
#include "compares.h"

int double_bigger_than(double a, double b)
{
  return (a-b > epsilon);
}

int is_double_equal(double a, double b)
{
  return !(fabs(a-b) > epsilon);
}
