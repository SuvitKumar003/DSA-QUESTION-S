#include<iostream>
using namespace std;
void partition(int arr[],int s1)
{
  int pivot=arr[s1-1];
  int j=-1;
  for(int i=0;i<s1-1;i++)
  {
    if(arr[i]<=pivot)
    {
      j++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[s1-1],arr[j+1]);
  cout<<" The pivot element is :"<<pivot<<endl;
  for(int i=0;i<s1;i++)
  {
    cout<<arr[i]<<" ";
  }

}
int main()
{
  int arr[]={30,40,20,50,80};
  int s1=sizeof(arr)/sizeof(arr[0]);
  partition(arr,s1);
  return 0;
}