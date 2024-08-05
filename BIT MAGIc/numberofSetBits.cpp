#include<iostream>
using namespace std;
void set_bits(int n)
{
  int x=n;
  int count=0;
  while(n>0)
  {
    n=n&(n-1);
    count=count+1;
  }
  cout<<" the number of set bits in the number "<<x<<" are "<<count<<endl;
}
int main()
{
  int number;
  cin>>number;
  set_bits(number);
  return 0;
}