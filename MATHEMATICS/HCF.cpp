#include<iostream>
using namespace std;
int HCF_Number(int a,int b)
{
  if(b==0)
  {
    return a;
  }
  HCF_Number(b,a%b);
}
int main()
{
  int a,b;
  cout<<" enter two Numbers for calculating the HCf  "<<endl;
  cin>>a;
  cin>>b;
  cout<<" the result is "<<HCF_Number(a,b)<<endl;
}