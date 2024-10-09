#include<iostream>
#include<vector>
using namespace std;
vector<int> element_sum(int arr[],int len,int s)
{
  int i=0;int j=len-1;
  vector<int> v;
  while(i<j)
  {
    
    if(arr[i]+arr[j]==s)
    {
      v.push_back(arr[i]);
      v.push_back(arr[j]);
      return v;
    }
    if(arr[i]+arr[j]<s)
    {
      i++;
    }
    else
    {
      j--;
    }
    }
   
    
  
  v.push_back(-1);
  return v;

}
int main()
{
  int arr[]={2,4,8,9,11,12,20,30};
  int s=23;
  vector<int> v=element_sum(arr,8,s);
  cout<<" the result is "<<endl;
  if(v.size()==1)
  {
    cout<<"No such pair found";
  }
  else
  {
    cout<<v[0]<<" "<<v[1];
  }
}