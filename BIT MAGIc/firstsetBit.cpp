#include<iostream>
#include<cmath>
using namespace std;
int position(int number)
{
  int res=log2(number&(~(number-1)));
  return res;
}
int main()
{
  int number=18;
  cout<<position(number);
  return 0;
}
