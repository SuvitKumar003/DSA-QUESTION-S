#include<iostream>
using namespace std;
int coutn(int number)
{
  int count=0;
  int num=number;
  while(num)
  {
    num=num&(num-1);
    count++;
  }
  return count;
}
int main()
{
  int number;
  cin>>number;
  cout<<coutn(number);
  return 0;
}