#include <any>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include <vm/vm.hpp>

Value DoubleValue::add(const Value &value) const {
  return value.add(*this);
}

Value DoubleValue::add(const DoubleValue &double_value) const {
  return Value(m_value + double_value.m_value);
}

Value DoubleValue::add(const StringValue &string_value) const {
  char *endptr = nullptr;
  double string_as_double = std::strtod(string_value.m_value.c_str(), &endptr);
  if (*endptr != '\0') {
    throw std::bad_typeid();
  }
  return Value(m_value + string_as_double);
}

Value DoubleValue::add(const BoolValue &bool_value) const {
  return Value(m_value + bool_value.m_value);
}

void DoubleValue::print() {
  std::cout << "Printing a double: " << m_value << "\n";
}
