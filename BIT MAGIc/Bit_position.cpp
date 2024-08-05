#include<iostream>
#include<cmath>
using namespace std;
void check_bit_position(int n,int k)
{
  int number=(1<<(k-1));
  cout<<" After left shifting k-1 times the result is "<<number<<endl;
  if((n&number)!=0)
  {
    cout<<" The Given bit is set "<<endl;
  }
  else
  {
    cout<<" The given bit is not set "<<endl;
  }
}
int main()
{
  int x,y;
  cout<<" enter the number and the position to be checked for the bit matching "<<endl;
  cin>>x>>y;
  check_bit_position(x,y);
}