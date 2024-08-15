#include<iostream>
using namespace std;
void left_rotate(int arr[],int n)
{
   
  cout<<"The array after left rotation is: "<<endl;
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
  left_rotate(arr,n);
  return 0;
}