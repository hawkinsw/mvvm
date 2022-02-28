#include <iostream>
#include <string>

#include <vm/vm.hpp>

Value BoolValue::add(const Value &value) const {
  return value.add(*this);
}

Value BoolValue::add(const DoubleValue &double_value) const {
  throw std::bad_typeid();
}

Value BoolValue::add(const StringValue &string_value) const {
  throw std::bad_typeid();
}

Value BoolValue::add(const BoolValue &bool_value) const {
  throw std::bad_typeid();
}

void BoolValue::print() {
  std::cout << "Printing a boolean: " << std::boolalpha << m_value << "\n";
}
