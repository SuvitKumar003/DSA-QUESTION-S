#include<iostream>
using namespace std;
/*int breakpoint(int arr[],int len)
{
  int mid;
  int low=0,high=len-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(arr[mid]>arr[mid+1])
    {
      return mid;
    }
    else if(arr[mid]<arr[low]){
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }
  }
}
int find_number(int arr[],int len,int n)
{
  int low=0,high=len-1;
  int mid;
  int bp=breakpoint(arr,len);
  if(arr[bp]==n)
  {
    return bp;
  }
  if(n>arr[0]&&n<arr[bp])
  {
    low=0;
    high=bp;
  }
  else
  {
    low=bp+1;
    high=len-1;
  }
  while(low<=high)
  {
    mid=(low+high)/2;
    if(arr[mid]==n)
    {
      return mid;
    }
    else
    {
      if(n<arr[mid])
      {
        high=mid-1;
      }
      else
      {
        low=mid+1;
      }
    }
  }
}*/
int find_element(int arr[],int len,int n)
{
  int low=0,high=len-1,mid;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(arr[mid]==n)
  {
    return mid;
  }
  if(arr[low]<arr[mid])
  {
    if(n>=arr[low]&&n<arr[mid])
    {
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }
  }
  else
  {
    if(n>arr[mid]&&n<=arr[high])
    {
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
 }
}
int main()
{
  int arr[]={5,6,7,8,9,10,1,2,3,4};
  int n=3;
  int len=sizeof(arr)/sizeof(arr[0]);
  if(find_element(arr,len,n)==-1)
  {
    cout<<"Element not found";
  }
  else
  {
    cout<<"Element found at index "<<find_element(arr,len,n);
  }
  return 0;
}
