#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <vm/vm.hpp>

int main() {

  Value vs{std::string{"5"}};
  Value vss{1.0};
  Value vsss{true};

  vs.print();
  vss.print();
  vsss.print();

  vs.add(vss).print();
}
