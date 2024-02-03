#include<iostream>
using namespace std;
int live(int n,int k)
{
  if(n==1)
  {
    return 1;
  }
  else
  {
    return (live(n-1,k)+k-1)%n +1;
  }
}
int main()
{
  int res=live(14,2);
  cout<<" the person who is alive is "<<res<<endl;
}