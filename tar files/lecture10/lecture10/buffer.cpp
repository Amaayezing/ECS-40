//
// buffer.cpp
//

#include<iostream>
#include<string>
using namespace std;

template<typename T, int n>
class Buffer
{
  public:
    Buffer(void) : size(n) {}
  private:
    T v[n];
    int size;
};

int main()
{
  Buffer<char, 64> cbuf;
  Buffer<float,32> fbuf;
  Buffer<string,8> sbuf;
}
