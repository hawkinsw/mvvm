#include <any>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include <vm/vm.hpp>

Value::Value(const double &double_value) {
  m_letter = new DoubleValue(double_value);
}
Value::Value(const std::string &string_value) {
  m_letter = new StringValue(string_value);
}
Value::Value(const bool &bool_value) {
  m_letter = new BoolValue(bool_value);
}

Value Value::add(const Value &value) const { return m_letter->add(value); }
Value Value::add(const StringValue &value) const  { return m_letter->add(value); }
Value Value::add(const DoubleValue &value) const{ return m_letter->add(value); }
Value Value::add(const BoolValue &value) const { return m_letter->add(value); }

bool Value::is_true() { return m_letter->is_true(); }

void Value::print() { m_letter->print(); }
