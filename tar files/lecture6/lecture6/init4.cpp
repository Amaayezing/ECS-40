//
// init4.cpp
//
// initialization of a class containing a reference member
// use an initialization list
#include<iostream>
#include<stdexcept>
using namespace std;

class DataBase
{
  public:
    int data;
};

class Value
{ 
  public:
    Value(DataBase& db) : database(db) {}
    void set(int x) { i = x; }
    int get(void) const { return i; }
    friend ostream& operator << (ostream& os, const Value& v)
    { os << v.i; return os; }
  private:
    DataBase& database;
    int i;
};

int main()
{
  DataBase db;
  Value v(db);
  cout << v << endl;
}
