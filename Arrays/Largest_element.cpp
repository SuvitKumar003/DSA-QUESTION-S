#include<iostream>
using namespace std;
int largest_element(int arr[],int size)
{
  int largest=arr[0];
  for(int i=0;i<size;i++)
  {
if(arr[i]>largest)
{
  largest=arr[i];
}
}
return largest;
  }
int main()
{
  int arr[]={4,6,9,1,2};
  cout<<" The largest element is "<<largest_element(arr,5);
}