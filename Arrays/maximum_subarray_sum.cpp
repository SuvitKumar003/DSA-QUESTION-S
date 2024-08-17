#include<iostream>
using namespace std;
int maxsubarraysum(int arr[],int n)
{
  int maxsum=arr[0];
  for(int i=0;i<n;i++)
  {
    int sum=0;
   for(int j=i;j<n;j++)
   {
    sum+=arr[j];
    maxsum=max(maxsum,sum);

   }
  }
  return maxsum;
}
int main()
{
  int arr[]={-1,-2,-3,-4};
  cout<<"The maximum subarray sum is: "<<maxsubarraysum(arr,4);
  return 0;
}