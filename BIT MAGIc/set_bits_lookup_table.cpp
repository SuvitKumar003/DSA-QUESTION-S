#include<iostream>
using namespace std;
int table[255]={0};
int set_bits(int n)
{
  int x=n;
  int count=0;
  while(n>0)
  {
    n=n&(n-1);
    count=count+1;
  }
  cout<<" the number of set bits in the number "<<x<<" are "<<count<<endl;
  return count;
}
void intilize()
{
  
  for(int i=0;i<255;i++)
  {
    table[i]=set_bits(i);
  }
}
void set_bits1(int n)
{
  int count=table[n&255]+table[(n>>8)&255]+table[(n>>16)&255]+table[(n>>24)&255];
  cout<<" The number of set bits are "<<count<<endl;
}
int main()
{
  intilize();
  set_bits1(6589420);
}