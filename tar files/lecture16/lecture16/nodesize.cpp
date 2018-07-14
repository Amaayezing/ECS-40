//
// nodesize.cpp
//

#include<iostream>
using namespace std;

template <typename T> 
class Node
{
  public:
    Node(T i) : val(i), left(0), right(0) {}
    T val;
    Node *left, *right;
};

int main()
{
  cout << "sizeof(int):    " << sizeof(int) << endl;
  cout << "sizeof(double): " << sizeof(double) << endl;
  cout << "sizeof(char):   " << sizeof(char) << endl;
  cout << "sizeof(char*):  " << sizeof(char*) << endl;
  cout << endl;
  cout << "sizeof(Node<int>):    " << sizeof(Node<int>) << endl;
  cout << "sizeof(Node<double>): " << sizeof(Node<double>) << endl;
  cout << "sizeof(Node<char>):   " << sizeof(Node<char>) << endl;
  cout << "sizeof(Node<char*>):  " << sizeof(Node<char*>) << endl;
}
