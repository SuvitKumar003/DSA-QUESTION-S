#include<iostream>
using namespace std;
void factors(int a)
{
  if(a<=1)
  {
    return;
  }
  while(a%2==0)
  {
    cout<<"2*";
    a=a/2;
  }
    
  while(a%3==0)
  {
    cout<<"3"<<endl;
    a=a/3;
  }
  
  for(int i=5;i*i<=a;i=i+6)
  {
    while(a%i==0)
    {
      cout<<i<<" * ";
      a=a/i;
    }
    
    while(a%(i+2)==0)
  {
    cout<<(i+2)<<" * ";
    a=a/(i+2);
  }
  
  }
}
int main()
{
  int n;
  cin>>n;
  factors(n);
}