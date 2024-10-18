#include<iostream>
using namespace std;
int partition(int arr[],int l,int h)
{
  int pivot=arr[h];
  int i=l-1;
  for(int j=l;j<h;j++)
  {
    if(arr[j]<pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[h]);
  return i+1;
}
int kth_smallest_element(int arr[],int l,int h,int k)
{
  if(l<h)
  {
    int p=partition(arr,l,h);
    if(p==k-1)
    {
      return arr[p];
    }
    else if(p>k-1)
    {
      return kth_smallest_element(arr,l,p-1,k);
    }
    else{
      return kth_smallest_element(arr,p+1,h,k);
    }
  }
 return -1;
}
int main()
{
  int arr[]={10, 7, 8, 9, 1, 5};
  int s1=sizeof(arr)/sizeof(arr[0]);
  int k=3;
  cout<<kth_smallest_element(arr,0,s1-1,k);
  return 0;
}
