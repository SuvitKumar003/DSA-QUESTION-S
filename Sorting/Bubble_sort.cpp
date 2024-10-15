#include<iostream>
using namespace std;

void bubble_srot(int arr[],int size)
{
  for(int i=0;i<size-1;i++)
  {
    for(int j=0;j<size-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);

      }
    }
  }
  cout<<" The sorted array is :";
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int arr[]={64, 34, 25, 12, 22, 11, 90};
  int size=sizeof(arr)/sizeof(arr[0]);
  bubble_srot(arr,size);
  return 0;
}