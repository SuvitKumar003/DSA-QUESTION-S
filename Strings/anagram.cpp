#include<iostream>
using namespace std;
#include<string>
#include<unordered_map>
// The below approch fails for some test cases when the sum of two diffrerent strings is same even of the diffrent characters.
/*
bool isAnagram(string s1,string s2)
{
  if(s1.length()!=s2.length())
  {
    return false;
  }
  int sum1=0;
  int sum2=0;
  for(int i=0;i<s1.length();i++)
  {
    sum1+=s1[i];
    sum2+=s2[i];
  }
  return sum1==sum2;
}
*/
bool isAnagram(string s1,string s2)
{
  unordered_map<char,int> m;
  for(int i=0;i<s1.length();i++)
  {
    m[s1[i]]++;
    m[s2[i]]--;
  }
  for(auto x:m)
  {
    if(x.second!=0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  string s1="Suvit";
  string s2="Suvit";
  cout<<isAnagram(s1,s2);
  return 0;
}