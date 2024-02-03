#include<iostream>
#include<algorithm>
using namespace std;
int maxCuts(int n,int a,int b,int c)
{
  if(n==0)
  {
    return 0;
  }
  if(n<=-1)
  {
    return -1;
  }
  int res1 = maxCuts(n - a, a, b, c);
  int res2 = maxCuts(n - b, a, b, c);
  int res3 = maxCuts(n - c, a, b, c);
  int pieces = max(res1, max(res2, res3));
  if(pieces == -1)
  {      
    return -1;
  }
          return pieces + 1;
}
int main()
{
  int n=17,a=10,b=11,c=3;
  cout<<maxCuts(n,a,b,c);
}