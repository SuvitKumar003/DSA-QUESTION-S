#include<iostream>
#include<cmath>
using namespace std;
void first_Set_bit_postion(int n)
{
  if(n%2==0)
  {
    cout<<" first bit is set"<<endl;
  }
  else
  {
    cout<<" first bit is not set"<<endl;
  }
}
int main()
{
    first_Set_bit_postion(5);
}