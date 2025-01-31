#include<iostream>
using namespace std;
#include<string>

void pattern_match_distinct(string s,string pat)
{
  int n=s.length();
  int m=pat.length();
  for(int i=0;i<=n-m;)
  {
    int j;
    for(j=0;j<m;j++)
    {
      if(s[i+j]!=pat[j])
      {
        break;
      }
      }
      if(j==m)
      {
        cout<<"Pattern found at index "<<i<<endl;
      }
      if(j==0)
      {
        i++;
      }
      else
      {
        i+=j;
      }

    }
  }

int main()
{
  string s="ABABABCD";
  string pat="ABAB";
  pattern_match_distinct(s,pat);
  return 0;
}