#include<iostream>
using namespace std;
#include<string>

void reverse_string(string &s,int i,int j)
{
  while(i<=j)
  {
    swap(s[i],s[j]);
    i++;
    j--;
  }
}
void reverse_words(string &s)
{
  int start=0;
  for(int end=0;end<s.length();end++)
  {
    if(s[end]==' ')
    {
      reverse_string(s,start,end-1);
      start=end+1;
    }
  }
  reverse_string(s,start,s.length()-1);
  reverse_string(s,0,s.length()-1);
}
int main()
{
  string s="i like this program very much";
  reverse_words(s);
  cout<<s;
  return 0;
}