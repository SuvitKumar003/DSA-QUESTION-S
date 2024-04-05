#include<iostream>
using namespace std;
void cehck(int n,int postion)
{
  int a=1<<postion;
  if(n&a)
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }
}
int main()
{
  int n,postion;
  cin>>n>>postion;
  cehck(n,postion);
  return 0;
}