#include<iostream>
using namespace std;
#include<string>
bool isPalindrome(string s)
{
  int n=s.length();
  int i=0;
  int j=n-1;
  while(i<j)
  {
    if(s[i]!=s[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}
int main()
{
  string s="Suvit";
  cout<<isPalindrome(s);
  return 0;
}