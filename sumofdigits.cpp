#include<iostream>
using namespace std;
int sumofdigits(int n)
{
  if(n<10)
  {
    return n;
  }
  return n%10+sumofdigits(n/10);
}
int main()
{
  int res=sumofdigits(12345);
  cout<<" the result of the given number is  "<<res<<endl;
}