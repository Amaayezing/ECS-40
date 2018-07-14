//
// Value4.h
//
// Definition of the Value class interface
// A data member is a uninitialized reference, causing an error.

#ifndef VALUE_H
#define VALUE_H
class Value
{ 
  public:
    void print(void);
    void set(int x);
  private:
    int i;
    int &refi;
};
#endif
