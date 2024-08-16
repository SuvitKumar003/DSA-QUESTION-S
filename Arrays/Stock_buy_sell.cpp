#include<iostream>
using namespace std;
int profit(int arr[],int n)
{
  int profit1=0;
  for(int i=1;i<n;i++)
  {
    if(arr[i]>arr[i-1])
    {
      profit1+=arr[i]-arr[i-1];
    }
    
  }
  return profit1;
}
int main()
{
  cout<<"Enter the size of the array: ";
  int x;
  cin>>x;
  cout<<"Enter the elements of the array: ";
  int arr[x];
  for(int i=0;i<x;i++)
  {
    cin>>arr[i];
  }
  cout<<"The maximum profit that can be obtained is: "<<profit(arr,x);
  return 0;
}