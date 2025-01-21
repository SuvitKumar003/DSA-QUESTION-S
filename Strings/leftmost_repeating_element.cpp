#include<iostream>
using namespace std;
#include<string>
#include<unordered_map>
int index_leftmost_repeating_element(string s)
{
  unordered_map<char , tuple<int,int>> m;
  for(int i=0;i<s.length();i++)
  {
    if(m.find(s[i])==m.end())
    {
      m[s[i]]={1,i};
    }
    else
    {
      get<0>(m[s[i]])++;
    }
  }
  for(int i=0;i<m.size();i++)
  {
    if(get<0>(m[s[i]])>1)
    {
      return get<1>(m[s[i]]);
    }
  }
  return -1;
}
int main()
{
  string s="abcd";
  cout<<index_leftmost_repeating_element(s);
  return 0;
}