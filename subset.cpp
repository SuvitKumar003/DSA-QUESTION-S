#include<iostream>
using namespace std;
void powerset(string s,int index,string curr="")
{
  int n=s.length();
  if(index==n)
  {
    cout<<curr<<endl;
    return;
  }
  powerset(s,index+1,curr);
  powerset(s,index+1,curr+s[index]);
}
int main()
{
  string s="Suv";
  powerset(s,0);

}