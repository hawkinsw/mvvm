#ifndef _VM_BOOLVALUE_HPP
#define _VM_BOOLVALUE_HPP

#include <vm/vm.hpp>

class BoolValue : public Value {
public:
  BoolValue(const bool &bool_value) : Value(ValueToken{}) {
    m_value = bool_value;
  }

  Value add(const Value &value) const;
  Value add(const DoubleValue &double_value) const;
  Value add(const StringValue &string_value) const;
  Value add(const BoolValue &bool_value) const;

  bool is_true() { return m_value; }

  void print();
  bool m_value;
};

#endif