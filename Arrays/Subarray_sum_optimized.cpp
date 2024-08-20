#include<iostream>
using namespace std;
bool subarray_sum(int arr[],int n,int req_sum)
{
  int sum1=0;
  int curr_sum=0;
  int start=0;
  for(int e=0;e<n;e++)
  {
    curr_sum+=arr[e];
    while(curr_sum>req_sum)
    {
      curr_sum-=arr[start];
      start++;
    }
    if(curr_sum==req_sum)
    {
      cout<<"The subarray with the given sum is from "<<start<<" to "<<e<<endl;
      return true;
    }
  }
  return false;
}
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array: "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int req_sum;
  cout<<"Enter the required sum: ";
  cin>>req_sum;
  if(!subarray_sum(arr,n,req_sum))
  {
    cout<<"No subarray with the given sum exists."<<endl;
  }
  return 0;
}