#include<iostream>
using namespace std;
int count_of_1s(int arr[],int len)
{
 
  int low=0;int high=len-1;int mid;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(arr[mid]==0)
    {
      low=mid+1;
    }
    else
    {
      if(mid==0||arr[mid-1]==0)
      {
        return len-mid;
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
  int arr[]={0,0,0,0,1,1,1,1,1,1,1,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<count_of_1s(arr,n);
  return 0;
}