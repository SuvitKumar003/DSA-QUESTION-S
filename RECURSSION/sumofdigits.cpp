#include<iostream>
using namespace std;
int sum_of_digits(int number)
{
  ;
  int x=number%10;
  if(number==0)
  {
   return 0;
  }
 return x+sum_of_digits(number/10);
}
int main()
{
  cout<<" Enter the number for calculating the sum odf digits "<<endl;
  int num;
  cin>>num;
  cout<<" The sum fo numbers is "<<sum_of_digits(num);
}