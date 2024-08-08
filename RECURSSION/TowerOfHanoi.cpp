#include<iostream>
using namespace std;
void print_Steps(int n,char x,char y,char z)
{
  if(n==1)
  {
    cout<<" Move the disk from "<<x<<" to "<<z<<endl;
    return;
  }
  print_Steps(n-1,x,z,y);
  cout<<" move ths disk from"<<x<<" to "<<z<<endl;
  print_Steps(n-1,y,x,z);
}
int main()
{
  int n;
  cout<<"Enter the number of disks"<<endl;
  cin>>n;
  print_Steps(n,'A','B','C');
  return 0;
}