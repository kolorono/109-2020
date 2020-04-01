#include <stdio.h>
#include <math.h>
#include "simpson.h"
double simpson(RRFUN function, double a, double b, int n)
{
  int i;
  double h = 0, index1 = 0, index2 = 0, result1 = 0, result2 = 0, answer = 0, x = 0;
  h = (b - a)/(2 * n);
  for (i = 1, i < n, i += 2)
  {
    x = a + (h * i)
    result1 = result1 + (*function)(x)
  }
  for (i = 2, i < n - 1, i += 2)
  {
    x = a + (h * i)
    result2 = result2 + (*function)(x)
  }
  result = (h/3)*((*function)(a) + (*function)(b) + 2 * result2 + 4*result)
}
