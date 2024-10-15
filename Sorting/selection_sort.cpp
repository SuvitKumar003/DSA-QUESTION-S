#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
 int min_ele;
 for(int i=0;i<n-1;i++)
 {
  int min_ele=i;
    for(int j=i+1;j<n;j++)
  {
    if(arr[min_ele]>arr[j])
    {
      min_ele=j;
    }
  }
  swap(arr[min_ele],arr[i]);
 }
 

}
int main()
{
  int arr[]={64, 34, 25, 12, 22, 11, 90};
  int n=sizeof(arr)/sizeof(arr[0]);
  selection_sort(arr,n);
  cout<<"The sorted array is :";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}