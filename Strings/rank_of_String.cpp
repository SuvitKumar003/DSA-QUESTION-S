#include<iostream>
using namespace std;
#include<string>
int fact(int n)
{
  return (n<=1)?1:n*fact(n-1);
}
int rank_of_String(string s)
{
  int res=1;
  int n=s.length();
  int mul=fact(n);
  int count[256]={0};
  for(int i=0;i<n;i++)
  {
    count[s[i]]++;
  }
  for(int i=1;i<256;i++)
  {
    count[i]=count[i]+count[i-1];
  }
  for(int i=0;i<n;i++)
  {
    int mul=mul/(n-i);
    res=res+(count[s[i]-1])*mul;
    for(int j=s[i];j<256;j++)
    {
      count[j]--;
    }
  }
  return res;
}
int main()
{
  string s="string";
  cout<<rank_of_String(s);
  return 0;
}