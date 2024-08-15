#include<iostream>
using namespace std;
void reverse(int arr[],int low,int high)
{
  while(low<high)
  {
    swap(arr[low],arr[high]);
    low++;
    high--;
  }
}
void rotate_element(int arr[],int n,int d)
{
  reverse(arr,0,d-1);
  reverse(arr,d,n-1);
  reverse(arr,0,n-1);
  cout<<" Array after roatation is "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"->";
  }
}
int main()
{
  int n;
  cout<<" Enter the size of the array "<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int d;
  cout<<" Enter the amount by which you want to rotate the array "<<endl;
  cin>>d;
  rotate_element(arr,n,d);
}