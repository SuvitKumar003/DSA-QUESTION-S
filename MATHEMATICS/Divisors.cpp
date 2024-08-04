#include<iostream>

using namespace std;
void divisors_number(int a)
{
  int i;
  for(i=1;i*i<=a;i++)
  {
    if(a%i==0)
    {
      cout<<i<<" ";
    }
  }
  for(;i>=1;i++)
  {
    if(a%i==0)
    {
      cout<<i<<" ";
    }
  }
}
int main()
{
  int x;
  cout<<" enter the number to be checked "<<endl;
  cin>>x;
  divisors_number(x);
}