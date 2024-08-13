#include<iostream>
using namespace std;
int check_number(int n)
{
  if(n%2==0)
  {
    return 0; 
      }

if(n%3==2)
{
  return 0;
}
return 1;
}
int main()
{
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  if(check_number(n))
  {
    cout<<"The number is lucky"<<endl;
  }
  else
  {
    cout<<"The number is not lucky"<<endl;
  }
  return 0;
}