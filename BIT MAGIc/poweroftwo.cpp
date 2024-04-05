#include<iostream>
using namespace std;
bool check(int number)
{
  if(number==0)
  {
    return false;
  }
  else
  {
    int count=0;
  while(number)
  {
    number=number&(number-1);
    count++;
  }
  if(count==1)
  {
    return true;
  }
  else
  {
    return false;
  }

  }
}
int main()
{
  int number;
  cin>>number;
  if(check(number))
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }
  return 0;
}