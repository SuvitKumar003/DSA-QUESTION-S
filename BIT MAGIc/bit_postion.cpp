#include<iostream>
using namespace std;
void check(int n)
{
  if(n&1!=0)
  {
    cout<<" the first bit is set"<<endl;
  }
  else
  cout<<" the first bit is set"<<endl;
}
int main()
{
  int n;
  cout<<" enter the number to be checked "<<endl;
  cin>>n;
  check(n);
}