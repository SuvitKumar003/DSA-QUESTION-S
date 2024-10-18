#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int minimum_diffrence(int arr[],int n)
{
  int min_diff=INT_MAX;
 /* for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(arr[i]!=arr[j])
      {
      if(abs(arr[i]-arr[j])<min_diff)
      {
        min_diff=abs(arr[i]-arr[j]);
      }
      }
    }*/
   sort(arr,arr+n);
   for(int i=0;i<n-1;i++)
   {
      if(arr[i+1]-arr[i]<min_diff)
      {
        min_diff=arr[i+1]-arr[i];
      }
   }
  
  return min_diff;
}
int main()
{
  int arr[]={1,8,12,5,18};
  int s1=sizeof(arr)/sizeof(arr[0]);
  cout<<minimum_diffrence(arr,s1);
  return 0;
}