#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>
vector<int> intersection_array(vector<int> arr1,vector<int> arr2)
{
  int s1=arr1.size();
  int s2=arr2.size();
  if(s1==0 || s2==0)
  {
    return {};
 }
      if(s1>s2)
      {
        return intersection_array(arr2,arr1);
      }
  unordered_map<int,int> m;
  for(int i=0;i<s1;i++)
  {
    m[arr1[i]]++;
  }
  for(int i=0;i<s2;i++)
  {
    m[arr2[i]]++;
  }
  vector<int> res;
  
  for(int i=0;i<s1;i++)
  {
    if(m[arr1[i]]==2)
    {
      res.push_back(arr1[i]);
    }
  }
  return res;
}
int main()
{
  vector<int> arr1={1,2,3,4,5,6,7,8,9};
  vector<int> arr2={1,2,3,4,5,6,7,8,9};
  vector<int> res=intersection_array(arr1,arr2);
  for(int i=0;i<res.size();i++)
  {
    cout<<res[i]<<" ";
  }
  return 0;
}