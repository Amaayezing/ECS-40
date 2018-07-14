//
// stack2.cpp
//
// implementation using vector

#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

int main()
{
  stack<string,vector<string> > st;

  string s;
  cin >> s;
  while ( cin ) 
  {
    st.push(s);
    cin >> s;
  }

  while ( !st.empty() )
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}
