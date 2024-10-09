#include<iostream>
using namespace std;
int binserach(int arr[],int n,int l,int h)
{
  int mid;
  while(l<=h)
  {
    mid=(l+h)/2;
    if(arr[mid]==n)
    {
      return mid;
    }
    else
    {
      if(arr[mid]>n)
      {
        h=mid-1;
      }
      else
      {
        l=mid+1;
      }
    }
  }
  return -1;
}
int search(int arr[],int n)
{
 if(arr[0]==n)
 {
  return 0;
 }
  int i=1;
  while(arr[i]<n)
  {
    i=i*2;
    if(arr[i]==n)
    {
      return i;
    }
  }
  return binserach(arr,n,i/2,i);
 }

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int n=10;
  if(search(arr,n)==-1)
  {
    cout<<"Element not found";
  }
  else
  {
    cout<<"Element found at index "<<search(arr,n);
  }
  return 0;
}