#include<iostream>
using namespace std;
bool triplet(int arr[],int n)
{
  int i=0;
 for(;i<n;i++)
 {
  int j=0;;
  int k=n-1;
  while(j<k)
  {
    if(arr[i]+arr[j]+arr[k]==0)
    {
      return true;
    }
    else if(arr[i]+arr[j]+arr[k]<0)
    {
      j++;
    }
    else
    {
      k--;
    }
  }
 }
 return false;
}
int main()
{
  int arr[]={60,-65,5,-21,8,93};
  int n=sizeof(arr)/sizeof(arr[0]);
  if(triplet(arr,n))
  {
    cout<<"The triplet is present";
  }
  else
  {
    cout<<"The triplet is not present";
  }
  return 0;
}