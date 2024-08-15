#include<iostream>
using namespace std;
void left_rotate(int arr[],int n,int D)
{
  int temp[D];
  for(int i=0;i<D;i++ )
  {
    temp[i]=arr[i];
  }
  for(int i=D;i<n;i++)
  {
    arr[i-D]=arr[i];
  }
  for(int i=0;i<D;i++)
  {
    arr[n-D+i]=temp[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  cout<<"Enter the size of the array: ";
  int n;
  cin>>n;
  cout<<"Enter the elements of the array: ";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter the value of D: ";
  int D;
  cin>>D;
  left_rotate(arr,n,D);
  
  return 0;
}