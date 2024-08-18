#include<iostream>
using namespace std;
int sum_circular(int arr[],int n)
{
  int res=arr[0],maxEnding=arr[0];
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  for(int i=0;i<n;i++)
  {
    maxEnding=max(maxEnding+arr[i],arr[i]);
    res=max(res,maxEnding);
  }
  return sum-res;
}
int main()
{
  int arr[]={3,-4,5,6,-8,7};
  cout<<"The maximum sum of circular subarray is: "<<sum_circular(arr,6);
  return 0;
}