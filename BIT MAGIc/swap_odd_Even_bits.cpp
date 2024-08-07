#include<iostream>
using namespace std;
int return_number(int n)
{
  int x= n &  0xAAAAAAAA;
  int odd_bits = n & 0x55555555;
  x=x>>1;
  odd_bits=odd_bits<<1;
  return (x|odd_bits);

}
int main()
{
  cout<<" enter the number for swapping the bits "<<endl;
  int a;
  cin>>a;
 cout<<" number after swapping the bits is "<<return_number(a);
}