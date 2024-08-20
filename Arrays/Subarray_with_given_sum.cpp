#include<iostream>
using namespace std;
bool sum_given(int arr[],int n)
{
  int sum=arr[0];
  for(int i=1;i<n;i++)
  {
   
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  if(sum_given(arr,n))
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}
