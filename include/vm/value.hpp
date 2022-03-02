#ifndef _VM_VALUE_HPP
#define _VM_VALUE_HPP

#include <string>
#include <vm/vm.hpp>

enum class ValueType {
  DoubleValue,
  StringValue,
  BoolValue
};
class Value {
public:

  Value(const double &double_value);
  Value(const std::string &string_value);
  Value(const bool &bool_value);

  virtual Value add(const Value &value) const;
  virtual Value add(const DoubleValue &value) const;
  virtual Value add(const StringValue &value) const;
  virtual Value add(const BoolValue &value) const;

	virtual bool is_true();

  virtual void print();

  ValueType getType() const { return m_type; }

protected:
  Value(ValueToken) {}
  ValueType m_type;

private:
  Value *m_letter;
};

#endif