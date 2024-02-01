#include<iostream>
using namespace std;
bool checkP(string s,int l,int i)
{
  if(s[i]!=s[l])
  {
    return false;
  }
 
  if(l<i)
  {
    return true;
  }
    checkP(s,l-1,i+1);
    
  
}
int main()
{
  string s="abccbd";
  bool res=checkP(s,s.length()-1,0);
 // cout<<" the result of the given string is "<<res<<endl;
if(res)
{
  cout<<" the given numberis palindrome "<<endl;

}
else{
  cout<<" the given number os not palindrome"<<endl;
}
}