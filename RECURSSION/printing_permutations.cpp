#include<iostream>
using namespace std;
void print_permutations(string s,int i=0)
{
  if(i==s.length()-1)
  {
    cout<<s<<endl;
    return;
  }
  for(int j=i;j<s.length();j++)
  {
    swap(s[i],s[j]);  
    print_permutations(s,i+1);
    swap(s[i],s[j]);
  }
}
int main()
{
  cout<<"Enter the string for generating the permutations: "<<endl;
  string s;
  cin>>s;
  print_permutations(s);
  return 0;
}