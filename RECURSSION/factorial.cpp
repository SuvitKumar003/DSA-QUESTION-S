#include<iostream>
using namespace std;
int fact(int n,int N)
{
  if(n==1)
  {
    return N;
  }
  fact(n-1,n*N);
}
int main()
{
  int res=fact(10,1);
  cout<<"the result is "<<res<<endl;

}