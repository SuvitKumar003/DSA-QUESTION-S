#include<iostream>
using namespace std;
int second_largest(int arr[],int n)
{
  int res=-1;
  int largest=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>largest)
    {
      res=largest;
      largest=i;
    }
    else if(arr[i]!=arr[largest])// handeling cases like if the last elemts are same
    {
      if(res==-1 && arr[i]>arr[res])// if the last element encountered is less than the largest but greater tha our previous largeest so we update out largest element
      {
        res=i;
      }
    }
  }
return res;
}
int main()
{
  int arr[]={4,6,9,1,2};
  cout<<" The second largest element is "<<arr[second_largest(arr,5)];
}