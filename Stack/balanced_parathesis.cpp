#include<iostream>
using namespace std;
#include<stack>
#include<string>
int main()
{
  string s="{[({()})]}";
  stack<char> st;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='{'||s[i]=='['||s[i]=='(')
    {
      st.push(s[i]);
    }
    else if(s[i]=='}'||s[i]==']'||s[i]==')')
    {
      if(st.empty())
      {
        cout<<"Not Balanced\n";
        return 0;
      }
      char top=st.top();
      st.pop();
      if((top=='{'&&s[i]!='}')||(top=='['&&s[i]!=']')||(top=='('&&s[i]!=')'))
      {
        cout<<"Not Balanced\n";
        return 0;
      }
    }
  }
}