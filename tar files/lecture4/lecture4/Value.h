//
// Value.h
//
#ifndef VALUE_H
#define VALUE_H

#include<iostream>
#include<stdexcept>

class Value
{ 
  public:
    Value(void) { i = 1; }
    Value(int x) { set(x); }
    Value(const Value& v) { set(v.i); }
    ~Value(void) {}
    void set(int x)
    { 
      if ( x < 1 )
        throw std::invalid_argument("Value must be positive");
      i = x;
    }
    int get(void) const { return i; }
    Value& operator=(const Value& rhs)
    {
      if ( &rhs == this ) return *this;
      i = rhs.i;
      return *this;
    }
    friend const Value operator+(const Value& x, const Value& y)
    { return Value(x.i+y.i); }
    friend std::ostream& operator << (std::ostream& os, const Value& v)
    { os << v.i; return os; }
  private:
    int i;
};
#endif
