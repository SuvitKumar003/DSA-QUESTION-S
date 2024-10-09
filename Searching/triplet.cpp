#include<iostream>
#include<vector>
using namespace std;
vector<int> result(int arr[],int len,int sum)
{
  vector<int> v;
  int i=0,j=len-1,k=len-2;
  while(i<k && k<j)
  {
    if(arr[i]+arr[j]+arr[k]==sum)
    {
      v.push_back(arr[i]);
      v.push_back(arr[j]);
      v.push_back(arr[k]);
      return v;
    }
    if(arr[i]+arr[j]<sum)
    {
      if(arr[i]+arr[j]+arr[k]<sum)
      {
        i++;
      }
      else
      {
        k--;
      }
    }
    else
    {
      j--;
      k--;
    }
  }
}
int main()
{
  int arr[]={1,4,6,8,10,45};
  int s=22;
  vector<int> v=result(arr,6,s);
  if(v.size()==0)
  {
    cout<<"No such triplet found";
  }
  else
  {
    cout<<v[0]<<" "<<v[1]<<" "<<v[2];
  }
}