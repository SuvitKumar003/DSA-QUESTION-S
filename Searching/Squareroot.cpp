#include<iostream>
using namespace std;
int squareroot(int n)
{
int low=1,mid=0,high=n;
int ans;
while(low<high)
{
  mid=(low+high)/2;
  int sqr=mid*mid;
  if(sqr==n)
  {
    return mid;
  }
  else
  {
    if(n<sqr)
    {
      high=mid-1;
    }
    else
    {
      ans=mid;
      low=mid+1;
    }
  }
}
  return ans;
}
int main()
{
  int n=10;
  cout<<(squareroot(n));
  return 0;
}