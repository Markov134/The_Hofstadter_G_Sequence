#include <iostream>
#include <vector>
#include <new>

#include "src/factorial.hpp"
#include "src/HGSequence.h"

int main() {
  //std::cout << "The factorial of 5 is " << factorial(5) << std::endl;
  int n = 5;
  std::vector<int> cache(n + 1, -1);
  std::cout << Gsequence(n) << std::endl;
  std::cout << ImprovedGsequence(n, cache) << std::endl;
}
