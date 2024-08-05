#include<iostream>
using namespace std;
void check(int n)
{
  if(n==0)
  {
    cout<<" False "<<endl;
  }
  int count=0;
  while(n>0)
  {
    n=n&(n-1);
    count+=1;
  }
  if(count==1)
  {
    cout<<" the given number is power of two "<<endl;
  }
  else
  {
    cout<<" The given number is not a power of two "<<endl;
  }
}
int main()
{
  check(6);
}