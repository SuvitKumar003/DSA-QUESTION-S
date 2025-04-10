#include<iostream>
using namespace std;
#include<stack>
int main()
{
  stack<int> st;
  int arr[]={5,4,3,2,1,};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans[n];
  ans[0]=1;
  st.push(0);
 for(int i=1;i<n;i++)
 {
  while(st.empty()==false && arr[st.top()]<=arr[i])
  {
    st.pop();
  }
// this calculate the span for the largest element found till now
  if(st.empty())
  {
    ans[i]=i+1;
  }
  else
  //this calculate the span for the one of the largest stock price found ever
  {
    ans[i]=i-st.top();
  }
  st.push(i);

 }
 
  for(int i=0;i<n;i++)
  {
    cout<<ans[i]<<" ";
  }
  cout<<endl;
  return 0;
}