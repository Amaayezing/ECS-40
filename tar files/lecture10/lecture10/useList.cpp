//
// useList.cpp
//
// use the generic linked list declared in List.h

#include "List.h"
#include<string>
using namespace std;

int main()
{
  List<int> ilist;
  ilist.add(1);
  ilist.add(2);
  ilist.add(3);

  ilist.print();

  List<string> slist;
  slist.add("you");
  slist.add("with");
  slist.add("be");
  slist.add("force");
  slist.add("the");
  slist.add("may");

  slist.print();
}
