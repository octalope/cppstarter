#include "module.h"

Module::Module(int value): _value(value) {}

Module::Module(const Module& src) {
  *this = src;
}

Module& Module::operator=(const Module& src) {
  this->_value = src._value;
  return *this;
}

int Module::get_value() const {
  return this->_value;
}
