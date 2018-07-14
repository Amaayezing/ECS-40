//
// IntList.cpp
//
// Linked list hierarchy (not a good idea)

#include "IntList.h"
#include<iostream>
IntList::IntList(void): head(0) {}
void IntList::add(int i)
{
  IntNode* tp = new IntNode; 
  tp->val = i; 
  tp->next = head; 
  head = tp;
} 

void IntList::print(void)
{
  IntNode* p = head;
  while(p!=0) 
  {
    std::cout << p->val << std::endl;
    p = p->next;
  }
}

bool IntList::isEmpty(void)
{
  return head == 0;
}
