#include<iostream>
using namespace std;
int table[255]={0};
void intilize()
{
  
  for(int i=0;i<255;i++)
  {
    table[i]=table[i & (i-1)]+1;
  }
}
void set_bits(int n)
{
  int count=table[n&255]+table[(n>>8)&255]+table[(n>>8)&255]+table[(n>>8)&255];
  cout<<" The number of set bits are "<<count<<endl;
}
int main()
{
  intilize();
  set_bits(6589420);
}