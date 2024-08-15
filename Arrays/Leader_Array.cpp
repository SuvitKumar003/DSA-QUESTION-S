#include<iostream>
using  namespace std;
void leader(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        break
      }
    }
  }
}