#include<iostream>
using namespace std;
#include<string>
int longest_substring(string s)
{
  int length=0;
  for(int i=0;i<s.length();i++)
  {
    string sub="";
    int visited[265]={0};
    for(int j=i;j<s.length();j++)
    {
      sub+=s[j];
      if(visited[s[j]]==1)
      {
        break;
      }
      else
      {
        visited[s[j]]=1;
        length=max(length,j-i+1);
      }
    }
  }
  return length;
}
int main()
{
  string s="abcabcbb";
  cout<<longest_substring(s);
  return 0;
}