//
// Tree.h
//

#ifndef TREE_H
#define TREE_H

template <typename T> 
class Node
{
  public:
    Node(T i) : val(i), left(0), right(0) {}
    T val;
    Node *left, *right;
};

template <typename T> 
class Tree
{
  public:
    Tree(void) : root(0) {}
    void insertNode(T i);
    void preorderTraversal(void) const;
    void inorderTraversal(void) const;
    void postorderTraversal(void) const;
  private:
    Node<T> *root;
    void insertNodeAt(Node<T>*& p, T i);
    void preorderTraversalAt(Node<T> *p) const;
    void inorderTraversalAt(Node<T> *p) const;
    void postorderTraversalAt(Node<T> *p) const;
};
#endif
