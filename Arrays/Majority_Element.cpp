#include<iostream>
using namespace std;
int majority_element(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int count=1;
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])

    {
         count++;
    }
       if(count>n/2)
    {
   return i;
    }
 }    

}
  
  return -1;
}
int main()
{
  int arr[]={3,3,4,2,4,4,2,4,4};
  cout<<"The majority element is: "<<arr[majority_element(arr,9)];
  return 0;
}