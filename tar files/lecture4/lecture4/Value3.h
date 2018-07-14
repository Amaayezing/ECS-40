//
// Value3.h
//
// Definition of the Value class interface

#ifndef VALUE_H
#define VALUE_H
class Value
{ 
  public:
    Value(void); // ctor
    void print(void);
    void set(int x);
  private:
    int i;
};
#endif
