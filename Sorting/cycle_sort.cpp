#include<iostream>
using namespace std;
void cyclesort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    // this part finds the correct position of the current element
    int item=arr[i];
    int pos=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<item)
      {
        pos++;
      }
    }
    swap(item,arr[pos]);
    // this part moves the current element to its correct position for whole cycle
    while(pos!=i)
    {
      pos=i;
      for(int s=i+1;s<n;s++)
      {
        if(arr[s]<item)
        {
          pos++;
        }
      }
      swap(item,arr[pos]);
    }

  }
}
int main()
{
  int arr[]={20,40,50,10,30};
  int n=sizeof(arr)/sizeof(arr[0]);
  cyclesort(arr,n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}