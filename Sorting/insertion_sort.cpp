#include<iostream>
using namespace std;
int* insertion_sort(int arr[],int size)
{
   for(int i=1;i<size;i++)
   {
    int key=arr[i];
    int j=i-1;
    while( j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
   }
    return arr;
}
int main()
{
  int arr[]={64, 34, 25, 12, 22, 11, 90};
  int size=sizeof(arr)/sizeof(arr[0]);
  int* sorted_arr=insertion_sort(arr,size);
  cout<<"The sorted array is :";
  for(int i=0;i<size;i++)
  {
    cout<<sorted_arr[i]<<" ";
  }
  return 0;
}