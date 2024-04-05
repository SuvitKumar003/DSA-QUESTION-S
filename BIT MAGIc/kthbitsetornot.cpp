#include<iostream>
using namespace std;
bool checl(int number,int n)
{
  if(number & (1<<n))
  {
    return true;
  }
  return false;
}
int main()
{
  int number=10;
  int n=2;
  int res=checl(number,n);
if(res==0)
{
  cout<<" the given bit of the number"<<number<<" is not set"<<endl;
}
else
{
  cout<<" the given bit of the number"<<number<<" is set"<<endl;
}
  return 0;
}  