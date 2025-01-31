#include<iostream>
using namespace std;
#include<string>
void pattern_matching(string s,string pat)
{
  int n=s.length();
  int pat_length=pat.length();
  for(int i=0;i<n-pat_length;i++)
  {
    if(s[i]==pat[0])
    {
      int j=0;
      while(j<pat_length && s[i+j]==pat[j])
      {
        j++;
      }
      if(j==pat_length)
      {
        cout<<"Pattern found at index "<<i<<endl;
      }
    }
  }

}
int main()
{
  string s="ABABABCD";
  string pat="ABAB";
  pattern_matching(s,pat);
  return 0;
}