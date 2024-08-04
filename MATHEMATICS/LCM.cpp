#include<iostream>
using namespace std;
int gcd(int a,int b)
{
  if(b==0)
  {
    return a;
  }
  gcd(b,a%b);
}
int LCM_result(int a,int b)
{
  int result=(a*b)/gcd(a,b);
  return result;
}
int main()
{
  cout<<" enter two nu8mbers for calculatin the LCM of two numbers "<<endl;
  int a;
  int b;
  cin>>a>>b;
  cout<<" the result of two numbers is "<<LCM_result(a,b)<<endl;
}