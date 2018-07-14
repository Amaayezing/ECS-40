//
// static1.cpp
//
// Use of a static data member

#include<iostream>
using namespace std;

class Employee
{
  public:
    Employee(void) { count++; }
    ~Employee(void) { count--; }
    int employeeCount(void) { return count; }
  private:
    static int count;
};

int Employee::count = 0;

int main()
{
  cout << " declaring e1" << endl;
  Employee e1;
  cout << " count: " << e1.employeeCount() << endl;
  cout << " declaring e2" << endl;
  Employee e2;
  cout << " count: " << e2.employeeCount() << endl;
  cout << " dynamical allocation of *pe" << endl;
  Employee *pe = new Employee;
  cout << " count: " << e1.employeeCount() << endl;
  cout << " deleting pe" << endl;
  delete pe;
  cout << " count: " << e1.employeeCount() << endl;
}
