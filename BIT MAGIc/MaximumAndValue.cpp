#include<iostream>
using namespace std;
int maxAndValue(int arr[],int n,int mask)
{
  int count=0;
  for(int i=0;i<n;i++)
  
  {
    if(arr[i]&mask)
    {
      count++;
    }
  }
  return count;
}
int  value(int arr[],int n)
{
  int mask=0;
  int res=0;
  for(int i=31;i>=0;i--)
  {
    mask=mask|(1<<i);
    int count=maxAndValue(arr,n,mask);
    if(count>=2)
    {
      res=res|(1<<i);
    }
  }
  return res;
}
int main()
{
  int arr[]={3,5,6,8,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<value(arr,n);
  return 0;
}