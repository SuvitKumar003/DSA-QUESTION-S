#include<iostream>
using namespace std;
void sort_array(int arr[],int size)
{
  int i=0;
  int j=i-1;
  for(int i=0;i<size;i++)
  {
    if(arr[i]<0)
    {
      j++;
      swap(arr[j],arr[i]);
    }
  }
}
int main()
{
  int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
  int s1=sizeof(arr)/sizeof(arr[0]);
  sort_array(arr,s1);
  for(int i=0;i<s1;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}