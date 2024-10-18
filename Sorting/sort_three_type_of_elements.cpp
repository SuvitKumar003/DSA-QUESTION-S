#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort_array(int arr[],int size)
{
  int l=0;
  int mid=0;
  int h=size-1;
  while(mid<=h)
  {
    if(arr[mid]==0)
    {
      swap(arr[l],arr[mid]);
      l++;
      mid++;
    }
    else if(arr[mid]==1)
    {
      mid++;
    }
    else
    {
      swap(arr[mid],arr[h]);
      h--;
    }
  }
}
int main()
{
  int arr[]={0, 1, 2, 0, 1, 2};
  int s1=sizeof(arr)/sizeof(arr[0]);
  sort_array(arr,s1);
  for(int i=0;i<s1;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
