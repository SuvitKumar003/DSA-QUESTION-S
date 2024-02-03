#include<iostream>
using namespace std;
void TOH(int n,char A,char B,char C)
{
  if(n==1)
  {
    cout<<" move the disc "<<n<<" from "<<A<<" to "<<C<<endl;
    return ;
  }
  TOH(n-1,A,C,B);
  cout<<" move the disc "<<n<<" from tower "<<A<<" to tower "<<C<<endl;
  TOH(n-1,B,A,C);
  }
  int main()
  {
    TOH(3,'A','B','C');
  }