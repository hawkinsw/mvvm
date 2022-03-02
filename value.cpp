#include <any>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include <vm/vm.hpp>

Value::Value(const double &double_value) {
  m_letter = new DoubleValue(double_value);
  m_type = ValueType::DoubleValue;
}
Value::Value(const std::string &string_value) {
  m_letter = new StringValue(string_value);
  m_type = ValueType::StringValue;
}
Value::Value(const bool &bool_value) {
  m_letter = new BoolValue(bool_value);
  m_type = ValueType::BoolValue;
}

Value Value::add(const Value &value) const {
  switch (value.getType()) {
    case ValueType::BoolValue: {
      std::cout << "I dynamically resolved a boolean!\n";
      const BoolValue &bool_value = static_cast<const BoolValue&>(*value.m_letter);
      return add(bool_value);
    }
    case ValueType::StringValue: {
      std::cout << "I dynamically resolved a string!\n";
      const StringValue &string_value = static_cast<const StringValue&>(*value.m_letter);
      return add(string_value);
    }
    case ValueType::DoubleValue: {
      std::cout << "I dynamically resolved a double!\n";
      const DoubleValue &double_value = static_cast<const DoubleValue&>(*value.m_letter);
      return add(double_value);
    }
  }
  throw std::bad_typeid();
}

Value Value::add(const StringValue &value) const  { return m_letter->add(value); }
Value Value::add(const DoubleValue &value) const{ return m_letter->add(value); }
Value Value::add(const BoolValue &value) const { return m_letter->add(value); }

bool Value::is_true() { return m_letter->is_true(); }

void Value::print() { m_letter->print(); }
