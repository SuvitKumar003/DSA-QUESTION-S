#include<iostream>
using namespace std;
int rainwater(int arr[],int n)
{
  int res=0;
  for(int i=1;i<n-1;i++)
  {
    int lmax=arr[i];
    for(int j=0;j<i;j++)
    {
      lmax=max(lmax,arr[j]);
    }
    int rmax=arr[i];
  
 
  for(int j=i+1;j<n;j++)
  {
    rmax=max(rmax,arr[j]);
  }
  res+=(min(lmax,rmax))-arr[i];
  }
  return res;
  
}
int main()
{
  cout<<"Enter the size of the array: ";
  int n;
  cin>>n;
  cout<<"Enter the elements of the array: ";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"The amount of rainwater trapped is: "<<rainwater(arr,n);
  return 0;
}