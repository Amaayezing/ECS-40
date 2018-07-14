//
// static3.cpp
//
// Use of a static member function
#include<iostream>
using namespace std;

class Employee
{
  public:
    Employee(void) { count++; }
    ~Employee(void) { count--; }
    static int staticCount(void);
  private:
    static int count;
};

int Employee::count = 0;
int Employee::staticCount(void) { return count; }

int main()
{
  // use staticCount before any instance of Employee is created
  cout << " static count: " << Employee::staticCount() << endl;

  cout << " declaring e1" << endl;
  Employee e1;
  cout << " static count: " << Employee::staticCount() << endl;
  cout << " declaring e2" << endl;
  Employee e2;
  cout << " static count: " << Employee::staticCount() << endl;
  cout << " dynamical allocation of *pe" << endl;
  Employee *pe = new Employee;
  cout << " static count: " << Employee::staticCount() << endl;
  cout << " deleting pe" << endl;
  delete pe;
  cout << " static count: " << Employee::staticCount() << endl;
}
