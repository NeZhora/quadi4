#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <TXLib.h>
#include "test.h"
#include "compares.h"
#include "solver.h"

int test1(double a, double b, double c, double ref_k1, double ref_k2, enum ROOT_number ref_roots)
{
  double k1 = 0, k2 = 0;
  enum ROOT_number roots = solve(a, b, c, &k1, &k2);
  if (!is_double_equal(k1, ref_k1) || !is_double_equal(k2, ref_k2) ||
       roots != ref_roots)
  {
    printf("ALERT!    k1 = %lf, k2 = %lf, cc = %d\n", k1, k2, roots);
    printf("expected: k1 = %lf, k2 = %lf, cc = %d\n", ref_k1, ref_k2, ref_roots);
    return 0;
  }
  else
  {
     printf("ok\n");
     return 1;
  }
}

int alltests(void)
{
  int num_secc = 0;
  num_secc += test1( 1,  1,  1,  -0.5,        0.86602540,   COMPLEX_roots);
  num_secc += test1( 0,  0,  0,   0,          0,            INFINITE_roots);
  num_secc += test1( 1,  2,  1,  -1,          0,            ONE_root);
  num_secc += test1( 1,  0,  1,   0,          1,            COMPLEX_roots);
  num_secc += test1( 1,  0, -1,   0,          1,            TWO_roots);
  num_secc += test1( 7,  8, -346,-0.57142857, 7.05372965,   TWO_roots);
  num_secc += test1( 7, 89,  7,  -6.35714286, 6.27799851,   TWO_roots);
  num_secc += test1(78, 78,  7,  -0.5,        0.40032039,   TWO_roots);

  printf("%d из 8 тестов успешны\n", num_secc);
  return 0;
}


