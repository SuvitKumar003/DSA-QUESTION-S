#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector<pair<int,int>> merge_overlapping_array(vector<pair<int,int>> &arr)
{
  vector<pair<int,int>> res;
  if(arr.size()<=0)
  {
    return res;
  }
  sort(arr.begin(),arr.end());
  res.push_back(arr[0]);
  for(int i=1;i<arr.size();i++)
  {
    if(res.back().second>=arr[i].first)
    {
      res.back().second=max(res.back().second,arr[i].first);
      res.back().first=min(res.back().first,arr[i].first);
    }
    else{
      res.push_back(arr[i]);
    }
  }
  return res;
}
int main()
{
  vector<pair<int,int>> arr={{1,3},{2,6},{8,10},{15,18}};
  vector<pair<int,int>> res=merge_overlapping_array(arr);
  for(auto i:res)
  {
    cout<<"["<<i.first<<","<<i.second<<"]"<<" ";
  }
  return 0;
}