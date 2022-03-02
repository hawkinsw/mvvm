#ifndef _VM_DOUBLEVALUE_HPP
#define _VM_DOUBLEVALUE_HPP

#include <vm/vm.hpp>

class DoubleValue : public Value {
public:
  DoubleValue(const double &double_value) : Value(ValueToken{}) {
    m_value = double_value;
    m_type = ValueType::DoubleValue;
  }

  Value add(const DoubleValue &double_value) const;
  Value add(const StringValue &string_value) const;
  Value add(const BoolValue &bool_value) const;

  bool is_true() { return !!m_value; };

  void print();
  double m_value;
};

#endif