#include <stdio.h>
#include <math.h>

int main()
{
  double start = 0.00001;
  double prec = 1 + 0.001 / 100;
  int years = 1000000;
  for (int i = 0; i < years; ++i)
  {
    printf("Year: %d \n %f \n", i, start * pow(prec, i));
  }
  return 0;
}

// gcc -o demo demo.cpp
// ./demo