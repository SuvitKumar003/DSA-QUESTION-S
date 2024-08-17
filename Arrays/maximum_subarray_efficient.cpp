#include<iostream>
using namespace std;
int maxSubarraySum(int arr[],int n)
{
int maxEnding=arr[0];
int res=arr[0];

for(int i=1;i<n;i++)
{
  maxEnding=max(maxEnding+arr[i],arr[i]);
  res=max(res,maxEnding);

}
return res;
}
int main()
{
  int arr[]={-1,-2,-3,-4};
  cout<<"The maximum subarray sum is: "<<maxSubarraySum(arr,4);
  return 0;
}