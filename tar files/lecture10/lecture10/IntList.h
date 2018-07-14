//
// IntList.h 
//
// Linked list hierarchy (not a good idea)

#ifndef INTLIST_H
#define INTLIST_H
#include<iostream>

class List
{
  public:
    virtual void print(void) = 0;
    virtual bool isEmpty(void) = 0;
  // note: cannot declare add(...) here
};

class IntNode
{
  public:
    int val;
    IntNode *next;
};

class IntList : public List
{
  public:
    IntList(void);
    void add(int i);
    virtual void print(void);
    virtual bool isEmpty(void);
  private:
    IntNode *head;
};
#endif
