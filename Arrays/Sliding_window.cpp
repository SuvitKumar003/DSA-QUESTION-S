#include<iostream>
using namespace std;
int max_sum(int arr[],int n,int k)
{
  int res=arr[0];
  for(int i=0;i<n;i++)
  {
    int j=0;
    int sum=arr[0];
while(j<k)
{
  sum=sum+arr[i+j];
}
res=max(res,sum);
  }
  return res;
}
int main()
{
  int arr[]={1,8,30,-5,20,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=3;
  cout<<"The maximum sum of subarray of size "<<k<<" is: "<<max_sum(arr,n,k);
  return 0;
}