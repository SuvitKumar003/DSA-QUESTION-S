#include<iostream>
using namespace std;
int maxDiff(int arr[],int n)
{
  int max_diff=arr[1]-arr[0];
  int min_element=arr[0];
  for(int i=0;i<n;i++)
  {
    max_diff=max(max_diff,arr[i]-min_element);
    min_element=min(min_element,arr[i]);
  }
  return max_diff;
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
  cout<<"The maximum difference between two elements is: "<<maxDiff(arr,n);
  return 0;
}