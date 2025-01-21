#include<iostream>
using namespace std;
#include<string>
bool subsequence(string s1,string s2)
{
  int j=0;
  for(int i=0;i<s1.length();i++)
  {
    if(s1[i]==s2[j] && j<s2.length())
    {
      j++;
    }
  }
  return (j == s2.length());
}
int main()
{
  string s1="Suvit";
  string s2="Svt";
  cout<<subsequence(s1,s2);
  return 0;
}