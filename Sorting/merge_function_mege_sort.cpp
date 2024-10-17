#include<iostream>
using namespace std;
int* merge_function(int arr[],int low,int high,int mid,int size)
{
  int i=low;
  int j=mid+1;
  int k=0;
  int* arr3=new int[size];
  while(i<=mid && j<=high)
  {
    if(arr[i]<=arr[j])
    {
      arr3[k++]=arr[i++];
    }
    else
    {
      arr3[k++]=arr[j++];
    }
  }
  while(i<=mid)
  {
    arr3[k++]=arr[i++];
  }
  while(j<=high)
  {
    arr3[k++]=arr[j++];
  }
return arr3;
}
int main()
{
  int arr[]={1,3,5,7,9,2,4,6,8,10};
  int size=sizeof(arr)/sizeof(arr[0]);
  int low=0;
  int high=size-1;
  int mid=(low+high)/2;
  int* arr3=merge_function(arr,low,high,mid,size);
  for(int i=0;i<size;i++)
  {
    cout<<arr3[i]<<" ";
  }
  return 0;
}