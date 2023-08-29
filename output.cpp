#include <math.h>
#include <stdio.h>
#include <TXLib.h>
#include "output.h"
#include "compares.h"

int output(double k1, double k2, enum ROOT_number nroots)
{
  if(is_double_equal(k1, 0))
  {
    k1 = 0;
  }
  if(is_double_equal(k2, 0))
  {
    k2 = 0;
  }
  switch(nroots)
  {
    case INFINITE_roots:
      printf("x - любое\n");
      break;
    case ONE_root:
      printf("x = %lf\n", k1);
      break;
    case NONE_roots:
      printf("Корней нет");
      break;
    case TWO_roots:
      printf("x1 = %lf \n", k1+k2);
      printf("x2 = %lf \n", k1-k2);
      break;
    case COMPLEX_roots:
      printf("x1 = %lf + i * %lf \n", k1, k2);
      printf("x2 = %lf - i * %lf\n", k1, k2);
      break;
    default:
      printf("CRITICAL ERROR HAS ACCURED");
  }
  return 0;
}
