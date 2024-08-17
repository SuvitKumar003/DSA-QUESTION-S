#include<iostream>
using namespace std;
int rainwater(int arr[],int n)
{
  int res=0;
  int lmax[n];int rmax[n];
  //array used to store the maximum lenght og block found on the left side of that parrticular block
  int lmax[0]=arr[0];

  int rmax[n-1]=arr[n-1]
  for(int i=0;i<n;i++)
  {
    lmax[i]=max(lmax[i-1],arr[i]);
  }
  for(int i=n-2;i>=0;i--)
  {
    rmax[i]=max(rmax[i+1],arr[i]);
  }
  for(int i=1;i<n-1;i++)
  {
    res=res+(min(lmax[i]-rmax[i]))-arr[i];
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