#include<iostream>
#include<unordered_set>
using namespace std;
unordered_set<int> union_array(int arr1[],int arr2[],int n,int m)
{
  unordered_set<int> s;
  for(int i=0;i<n;i++)
  {
    s.insert(arr1[i]);
  }
  for(int i=0;i<m;i++)
  {
    s.insert(arr2[i]);
  }
  return s;
}
int main()
{
  int arr1[]={1,2,3,4,5,6,7,8,9};
  int arr2[]={1,2,3,4,5,6,7,8,9};
  unordered_set<int> s=union_array(arr1,arr2,9,9);
  for(auto i=s.begin();i!=s.end();i++)
  {
    cout<<*i<<" ";
  }
}
