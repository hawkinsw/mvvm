#include <iostream>
#include <string>

#include <vm/vm.hpp>

Value StringValue::add(const DoubleValue &double_value) const {
  return Value(m_value + std::to_string(double_value.m_value));
}

Value StringValue::add(const StringValue &string_value) const {
  return Value(m_value + string_value.m_value);
}

Value StringValue::add(const BoolValue &bool_value) const {
  return Value(m_value + std::to_string(bool_value.m_value));
}

void StringValue::print() {
  std::cout << "Printing a string: " << m_value << "\n";
}
