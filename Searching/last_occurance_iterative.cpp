#include<iostream>
using namespace std;
int last_occurance(int arr[],int ele,int len)
{
  int mid,low=0,high=len-1;
  
  while(low<high)
  {
    mid=(low+high)/2;
    if(ele<arr[mid])
    {
      high=mid-1;
    }
    else if(ele>arr[mid])
    {
      low=mid+1;
    }
    else if(mid==len-1||arr[mid]!=arr[mid+1])
    {
      return mid;
    }
    else
    {
      low=mid+1;
    }

    mid=(low+high)/2;
  }
}
int main()
{
    int arr[]={1,2,3,4,4,4,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ele=4;
    cout<<last_occurance(arr,ele,n);
    return 0;
}