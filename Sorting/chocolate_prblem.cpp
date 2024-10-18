#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void selection_sort(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
    int min_index=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[min_index])
      {
        min_index=j;
      }
    }
    swap(arr[i],arr[min_index]);
  }
}
vector<int> chocolate_problem(int arr[],int size,int m)
{
selection_sort(arr,size);
int min_diff=INT_MAX;
vector<int> result;
for(int i=0;i<size;i+=m)
{
  if(i+m-1<size)
  {
    int diff=arr[i+m-1]-arr[i];
    if(diff<min_diff)
    {
      min_diff=diff;  
    for(int j = i; j < i + m; j++) 
    {
       result.push_back(arr[j]);
    }
    }
  }
}
return result;

}
int main()
{
  int arr[]={7, 3, 2, 4, 9, 12, 56};
  int s1=sizeof(arr)/sizeof(arr[0]);
  int m=3;
  vector<int> v=chocolate_problem(arr,s1,m);
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}