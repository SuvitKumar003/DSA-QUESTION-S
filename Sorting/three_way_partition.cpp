#include<iostream>
using namespace std;
void three_way_partition(int arr[],int n,int low,int high)
{
  int start=0;
  int end=n-1;
  int mid=0;
  while(mid<=end)
  {
    if(arr[mid]<low)
    {
      swap(arr[start],arr[mid]);
      start++;
      mid++;
    }
    else if(arr[mid]>high)
    {
      swap(arr[end],arr[mid]);
      end--;

    }
    else
    {
      mid++;
    }
  }
}
int main()
{
  int arr[]={1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
  int s1=sizeof(arr)/sizeof(arr[0]);
  three_way_partition(arr,s1,20,54);
  for(int i=0;i<s1;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}