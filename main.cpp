#include <iostream>

#include "src/factorial.hpp"
#include "src/HGSequence.h"

int main() {
  //std::cout << "The factorial of 5 is " << factorial(5) << std::endl;
  std::cout << "Naive Recursion Method: \n";
  for (int i = 0; i <= 10; i++) {
    std::cout << Gsequence(i) << std::endl;
  }

  std::cout << "Improved Recursion Method: \n";
  for (int i = 0; i <= 10; i++) {
    std::cout << ImprovedGsequence(i) << std::endl;
  }
}
