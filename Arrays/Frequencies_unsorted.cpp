#include<iostream>
using namespace std;
void frequencies(int arr[],int n)
{
  int freq=1;int i=0,j=0;
  while(i<n)
  {
    j=i+1;
while(arr[i]==arr[j])
{
  freq=freq+1;
  j++;
}
cout<<"The frequency of "<<arr[i]<<" is "<<freq<<endl;
i=j;
freq=1;
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
  frequencies(arr,n);
  return 0;
}