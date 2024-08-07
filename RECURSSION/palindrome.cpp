#include<iostream>
using namespace std;
bool check(string s, int i,int j)
{
  if(s[i]!=s[j])
  {
    return false;

  }
  if(i>=j)
  {
    return true;
  }
  return check(s,i+1,j-1);
}
int main()
{
  string s;
  cout<<" Enter the string "<<endl;
  cin>>s;
  int length=s.length();
 cout<<" The result is"<<check(s,0,length-1);

}