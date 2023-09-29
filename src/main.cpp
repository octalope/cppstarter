#include <iostream>

#include "module.h"

int main() {
  const auto& module = Module(42);
  auto module2 = Module();
  module2 = module;

  std::cout << "Module2.value = " << module2.get_value() << std::endl;
  
  return 0;
}