//
// noequal.cpp
//
// Demonstrate the use of a class
// prevent assignment by defining operator=() as private

#include<iostream>
using namespace std;

class HTTPConnection
{ 
  public:
    void open(const char* url) { cout << "opening " << url << endl; }
    int get(void) const { /* get data from URL */ return 0; }
  private:
    HTTPConnection& operator=(const HTTPConnection& rhs);
};

int main()
{
  HTTPConnection c1,c2;
  c1.open("www.gnu.org");
  c2 = c1;
}
