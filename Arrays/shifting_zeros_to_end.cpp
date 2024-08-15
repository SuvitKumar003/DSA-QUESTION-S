#include<iostream>
using namespace std;
void shift_zero(int arr[],int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=0)
    {
      swap(arr[i],arr[count]);
      count++;
    }
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
    shift_zero(arr,n);
    cout<<"The array after shifting zeros to the end is: "<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
  }