#include<iostream>
#include<algorithm>
using namespace std;
/*void left_rotate(int arr[],int n,int D)
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
}*/
void reverse(int arr[],int low,int high)
{
  for(int i=low;i<(low+high)/2;i++)
  {
    swap(arr[i],arr[low+high-i]);
  }
}
void rotate_element(int arr[],int n,int d)
{
  reverse(arr,0,d-1);
  reverse(arr,d,n-1);
  reverse(arr,0,n-1);
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
  rotate_element(arr,n,D);
  cout<<"The array after left rotation is: "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}