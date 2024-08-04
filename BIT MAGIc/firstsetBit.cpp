#include<iostream>
#include<cmath>
using namespace std;
void first_Set_bit_postion(int n)
{
  if(n%2==0)
  {
    cout<<" first bit is set pf the number "<<endl;
  }
  else
  {
    cout<<" first bit is not set of the given number "<<endl;
  }
}
int main()
{
    first_Set_bit_postion(5);
}
