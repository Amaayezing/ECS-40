//
// tree4.cpp
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

template <typename T>
void Tree<T>::insertNode(T i)
{
  insertNodeAt(root,i); }

template <typename T>
void Tree<T>::insertNodeAt(Node<T>*& p, T i)
{
  if ( p == 0 )
  {
    p = new Node<T>(i);
  }
  else
  {
    if ( i < p->val )
    {
      // insert in the left subtree
      insertNodeAt(p->left, i);
    }
    else if ( i > p->val )
    {
      // insert in the right subtree
      insertNodeAt(p->right, i);
    }
    else
    {
      // i == value of current node: i == p->val
      // do nothing: no duplicates
    }
  }
}

////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Tree<T>::preorderTraversal(void) const
{
  preorderTraversalAt(root);
}

////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Tree<T>::preorderTraversalAt(Node<T> *p) const
{
  if ( p )
  {
    cout << p->val << " ";
    preorderTraversalAt(p->left);
    preorderTraversalAt(p->right);
  }
}

////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Tree<T>::inorderTraversal(void) const
{
  inorderTraversalAt(root);
}

////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Tree<T>::inorderTraversalAt(Node<T> *p) const
{
  if ( p )
  {
    inorderTraversalAt(p->left);
    cout << p->val << " ";
    inorderTraversalAt(p->right);
  }
}

////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Tree<T>::postorderTraversal(void) const
{
  postorderTraversalAt(root);
}

////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Tree<T>::postorderTraversalAt(Node<T> *p) const
{
  if ( p )
  {
    postorderTraversalAt(p->left);
    postorderTraversalAt(p->right);
    cout << p->val << " ";
  }
}

int main()
{
  Tree<int> t;  
  int i;
  while ( cin >> i )
    t.insertNode(i);

  t.preorderTraversal();
  cout << endl;

  t.inorderTraversal();
  cout << endl;

  t.postorderTraversal();
  cout << endl;

}
