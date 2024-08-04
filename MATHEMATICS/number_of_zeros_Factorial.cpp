#include<iostream>
using namespace std;
int count_zeros(int n)
{
  int res=0;
  for(int i=5;i<=n;i=i*5)
  {
    res=res+n/i;
  }
  return res;
}
int main()
{
  int a;
  cout<<" enter the number "<<endl;
  cin>>a;
  cout<<" the nu450mber of zeros in the factorail of number  "<<a<<" are "<<count_zeros(a);
}