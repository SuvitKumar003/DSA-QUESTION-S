#include<iostream>
using namespace std;

int largest_element(int arr[],int size)
{
  int largest=arr[0];
  //int second_largest=arr[0];
  for(int i=0;i<size;i++)
  {
if(arr[i]>largest)
{
  largest=arr[i];
}
}
return largest;
  }
  int second_largest(int arr[],int size)
  {
    int res=-1;
    int second_largest=arr[0];
    int largest=largest_element(arr,size);
    for(int i=0;i<size;i++)
    {
      if(arr[i]!=largest)
      {
        if(res==-1)
        {
          res=arr[i];
        }
        else if(arr[i]>res)
        {
          second_largest=res;
          res=arr[i];
        }
        else if(arr[i]>second_largest)
        {
          res=arr[i];
        }
      }
    }
    return res;
  }
int main()
{
  int arr[]={4,6,9,1,2};
  cout<<" The second largest element is "<<second_largest(arr,5);
}