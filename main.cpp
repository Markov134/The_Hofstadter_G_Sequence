#include <iostream>

#include "src/factorial.hpp"
#include "src/HGSequence.h"

int main() {
  //std::cout << "The factorial of 5 is " << factorial(5) << std::endl;
  std::cout << Gsequence(5) << std::endl;
  std::cout << ImprovedGsequence(5) << std::endl;
}
