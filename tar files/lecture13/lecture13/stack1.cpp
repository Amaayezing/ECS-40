//
// stack1.cpp
//

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
  stack<string> st;

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
