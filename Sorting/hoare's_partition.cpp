#include<iostream>
using namespace std;
int hoarse_partition(int arr[],int l,int h)
{
  int pivot=arr[l];
  int i=l-1,j=h+1;
  while(true)
  {
    do
    {
      i++;
    }while(arr[i]<pivot);
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
int main()
{
  int arr[]={5,3,8,4,2,7,1,10};
  cout<<"The pivot element is :";
  int s1=sizeof(arr)/sizeof(arr[0]);
  int res=hoarse_partition(arr,0,s1-1);
  
    cout<<res<<" ";
  
  return 0;
}
