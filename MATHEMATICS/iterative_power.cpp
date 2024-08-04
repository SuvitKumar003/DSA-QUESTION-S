#include<iostream>
using namespace std;
int Result(int a,int n)
{
  int res=1;
  while(n>0)
  {
    if(n%2!=0)
    {
      res=res*a;
    }
    a=a*a;
    n=n/2;
  }
  return res;
} 
int main()
{
  cout<<" The result of the above calculations is "<<Result(3,5);
}