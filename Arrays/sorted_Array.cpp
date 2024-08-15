#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]>arr[i+1])
    {
      return false;
    }
  }
  return true;
}
int main()
{
 int arr[]={12,34,56,78,89};
 cout<<sorted(arr,5);
}
