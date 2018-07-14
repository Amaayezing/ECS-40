//
// yoda.cpp
//

#include "Tree.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
  Tree<string> t;  
  string s;
  while ( cin >> s )
    t.insertNode(s);

  t.preorderTraversal();
  cout << endl;

  t.inorderTraversal();
  cout << endl;

  t.postorderTraversal();
  cout << endl;
}
