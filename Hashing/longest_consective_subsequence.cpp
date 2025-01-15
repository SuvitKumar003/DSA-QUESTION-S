#include<iostream>
#include<vector>
#include<set>
using namespace std; 
int longest_consective_subsequence(vector<int> arr)
{
  set<int> s;
  for(int i=0;i<arr.size();i++)
  {
    s.insert(arr[i]);
  }
  int max_length=0;
  for(int i=0;i<arr.size();i++)
  {
    if(s.find(arr[i]-1)==s.end())
    {
      int j=arr[i];
      while(s.find(j)!=s.end())
      {
        j++;
      }
      max_length=max(max_length,j-arr[i]);
    }
  }
  return max_length;
}