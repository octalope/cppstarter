#pragma once

class Module {
private: 
  int _value;
public:
  Module(int value=0);
  Module(const Module& src);
  Module& operator=(const Module& src);
  int get_value() const;
};
