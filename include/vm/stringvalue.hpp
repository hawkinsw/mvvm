#ifndef _VM_STRINGVALUE_HPP
#define _VM_STRINGVALUE_HPP

#include <vm/vm.hpp>

class StringValue : public Value {
public:
  StringValue(const std::string &string_value) : Value(ValueToken{}) {
    m_value = string_value;
    m_type = ValueType::StringValue;
  }

  Value add(const DoubleValue &double_value) const;
  Value add(const StringValue &string_value) const;
  Value add(const BoolValue &bool_value) const;

  bool is_true() { return m_value.length() != 0; };

  void print();
  std::string m_value;
};

#endif