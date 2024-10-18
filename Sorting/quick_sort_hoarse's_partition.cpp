#include<iostream>
using namespace std;
int hoarse_partition(int arr[],int l,int h)
{
  int i=l-1,j=h+1,pivot=arr[l];
  while(true)
  {
    do
    {
      i++;
    } while (arr[i]<pivot);
    do
    {
       j--;
    } while (arr[j]>pivot);
    if(i>=j)
    {
      return j;
    }
    swap(arr[i],arr[j]);
  }
  
}
void quick_sort(int arr[],int l,int h)
{
  if(l<h)
  {
    int p=hoarse_partition(arr,l,h);
    quick_sort(arr,l,p);
    quick_sort(arr,p+1,h);
  }
}
int main()
{
  int arr[]={8,4,7,9,3,10,5};
  int s1=sizeof(arr)/sizeof(arr[0]);
  quick_sort(arr,0,s1-1);
  for(int i=0;i<s1;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}