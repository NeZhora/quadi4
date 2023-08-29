#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <TXLib.h>
#include "common.h"
#include "compares.h"
#include "solver.h"
#include "output.h"
#include "test.h"

///@brief The main function of the project.

int main(void)
{
///First main() asks user if he wants to run tests, if user prints 'y',
///then main() runs alltests();
  printf("Тестов хотите? [y/N] ");
  int ans = getchar();
  if(ans == 'y')
  {
    alltests();
  }

///if user presses any other button, main() proceedes
///by recieving coefficents of the equation.
  double a = 0;
  double b = 0;
  double c = 0;
  double k1 = 0;
  double k2 = 0;

  printf("ax^2+bx+c=0\n");
  printf("a, b, c: ");
  while(scanf("%lf %lf %lf", &a, &b, &c) != 3)
  {
    printf("Некоректный ввод! Введите снова\n");
    while(getchar() != '\n')
    {
    }
    printf("a, b, c: ");
  }
///As we all know, scanf() returns number of succsesfully recieved numbers,
///so in case user inputs something incorrectly main() will print incorrect
///input message and wait for user to press enter.
///When he does, main() will recieve his input again.
  enum ROOT_number root_number = solve(a, b, c, &k1, &k2);

///After coeffisents were entered correctly, main() will use solve() to solve the equasion.
  assert(!isnan(k1));
  assert(!isnan(k2));
  assert(isfinite(k1));
  assert(isfinite(k2));
///Then assertion happens, that k1 and k2 are not infinite decimal numbers and that they
///are not NaNs (it has happened before, belive me).
  output(k1, k2, root_number);
///Than main() uses output() function to output our roots to user and returns 0.
  return 0;
}


