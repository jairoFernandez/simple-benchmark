#include <cmath>
#include <iostream>
int main()
{
  std::cout << std::fixed;
  double start = 0.00001;
  double prec = 1 + 0.001 / 100;
  int years = 1000000;
  for (int i = 0; i < years; ++i)
  {
    std::cout << "Year: " << i << "\n"
              << start * pow(prec, i) << "\n";
  }
}

// g++ -o cpp cpp.cpp
// ./cpp