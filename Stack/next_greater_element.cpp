#include<iostream>
using namespace std;
#include<stack>
int main()
{
  int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
  stack<int> st;
  int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
  int ans[size];
  ans[size-1]=-1;
  st.push(arr[size-1]);
  for(int i = size-2; i>=0;i--) {
    while(st.empty()==false && st.top()<=arr[i])
    {
      st.pop();
    }
    if(st.empty())
    {
      ans[i]=-1;
    }
    else
    {
      ans[i]=st.top();
    }
    st.push(arr[i]);
  }
for(int i=0;i<size;i++)
{
  cout<<ans[i]<<endl;
}
  
}